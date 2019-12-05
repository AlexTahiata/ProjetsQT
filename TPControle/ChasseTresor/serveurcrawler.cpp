#include "serveurcrawler.h"
#include "ui_serveurcrawler.h"

void qtPause(int millisecondes)
{
    QTimer timer;
    timer.start(millisecondes);
    QEventLoop loop;
    QObject::connect(&timer,&QTimer::timeout,&loop,&QEventLoop::quit);
    loop.exec();
}

ServeurCrawler::ServeurCrawler(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurCrawler)
{
    ui->setupUi(this);

    socketEcoute = new QTcpServer (this);
    socketEcoute->setMaxPendingConnections(2);


}

ServeurCrawler::~ServeurCrawler()
{
    delete ui;
}

void ServeurCrawler::onQTcpServer_newConnection()
{
    QTcpSocket *client;
    client = socketEcoute->nextPendingConnection();
    qDebug() << "En attente de la connexion d'un client...";

    //connect(client, &QTcpSocket::disconnected, this, &ServeurCrawler::onQTcpSocket_disconnected);

    QHostAddress adresseClient = client->peerAddress();
    listeSocketsClient.append(client);
    qDebug() << "Connexion du " + adresseClient.toString();
    qDebug() << "Start";

    connect(client, &QTcpSocket::readyRead, this, &ServeurCrawler::onQTcpSocket_readyRead);
}

void ServeurCrawler::onQTcpSocket_readyRead()
{
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender());
    int indClient = listeSocketsClient.indexOf(client);
    //qDebug() << indClient;

    if (listeSocketsClient.at(indClient)->bytesAvailable())
    {
        QByteArray buffer;
        buffer = listeSocketsClient.at(indClient)->readAll();
        QChar commande;
        commande = buffer.at(0);

        QString message = "Commande reçu du " + listeSocketsClient.at(indClient)->peerAddress().toString() + " : ";
        message += commande;
        qDebug() << message;
        QString reception = buffer.data();
        //qDebug() << reception;

        QPoint pos = listePositions.at(indClient);
        QString reponse;

        switch (commande.toLatin1()) {
        case 'U' :

            reponse = pos.y() + 1;
            listeSocketsClient.at(indClient)->write(reponse.toLatin1());
            break;
        case 'D' :
            reponse = pos.y() - 1;
            listeSocketsClient.at(indClient)->write(reponse.toLatin1());
            break;
        case 'L' :
            reponse = pos.x() - 1;
            listeSocketsClient.at(indClient)->write(reponse.toLatin1());
            break;
        case 'R' :
            reponse = pos.x() + 1;
            listeSocketsClient.at(indClient)->write(reponse.toLatin1());
            break;
        }
    }
}

void ServeurCrawler::onQTcpSocket_disconnected()
{
    QTcpSocket* client = qobject_cast<QTcpSocket*>(sender());
    qDebug() << "Deconnexion de "+client->peerAddress().toString();
    int index = listeSocketsClient.indexOf(client);
    listeSocketsClient.removeAt(index);
}

void ServeurCrawler::EnvoyerDonnees(QTcpSocket *client, QPoint pt, QString msg)
{
    quint16 taille = 0;
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out<<taille<<pt<<msg;
    taille = static_cast<quint16>(tampon.size()) - static_cast<quint16>(sizeof(taille));
    tampon.seek(0);
    out << taille;
    //listeSocketsClient->write(tampon.buffer());
    //listeSocketsClient.at(client)->write(tampon.buffer());
    client->write(tampon.buffer());
}

void ServeurCrawler::AfficherGrille()
{
    //tresor = DonnerPositionUnique(); //Le trésor prend comme coordonnées celles de la position unique
    grille.itemAtPosition(tresor.x(),tresor.y())->widget()->setStyleSheet("background-color : red"); //tresor en rouge

    //grille.itemAtPosition()->widget()->setStyleSheet("background-color : black"); //client au coordonnées ?
}

void ServeurCrawler::ViderGrille()
{
    for (int ligne = 0; ligne <= 20; ligne++)
    {
        for (int colonne = 0; colonne <= 20; colonne++)
        {
            grille.itemAtPosition(ligne, colonne)->widget()->setStyleSheet("background-color : white");
        }
    }
}

QPoint ServeurCrawler::DonnerPositionUnique()
{
    QRandomGenerator gen;
    QPoint pt;
    gen.seed(QDateTime::currentMSecsSinceEpoch());
    int ligne;
    int colonne;
    do
    {
        ligne=gen.bounded(20);
        qtPause(20);
        colonne=gen.bounded(20);
        qtPause(20);
        pt=QPoint(colonne,ligne);
    }while (listePositions.contains(pt));
    return pt;
}

double ServeurCrawler::CalculerDistance(QPoint pos)
{
    double distance;
    int xVecteur=tresor.x()-pos.x();
    int yVecteur=tresor.y()-pos.y();
    distance=sqrt((xVecteur*xVecteur+yVecteur*yVecteur));
    return distance;
}

void ServeurCrawler::on_pushButtonLancement_clicked()
{
    if(!socketEcoute->listen(QHostAddress::Any, static_cast<quint16>(ui->spinBoxPort->value())))
    {
        QString message = "Impossible de lancer le serveur, soQuoi";
        qDebug() << message;
    }
    else {
        QString message = "Serveur lancé";
        qDebug() << message;
        connect(socketEcoute, &QTcpServer::newConnection, this, &ServeurCrawler::onQTcpServer_newConnection);
        ui->pushButtonLancement->setEnabled(0);
        ui->spinBoxPort->setEnabled(0);
    }
}
