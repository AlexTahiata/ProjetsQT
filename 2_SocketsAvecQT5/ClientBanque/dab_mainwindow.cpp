#include "dab_mainwindow.h"
#include "ui_dab_mainwindow.h"

DAB_MainWindow::DAB_MainWindow(QWidget *parent) : // CONSTRUCTEUR
    QMainWindow(parent),
    ui(new Ui::DAB_MainWindow)
{
    ui->setupUi(this);

    socketClientBanque = new QTcpSocket (this); // CREATION SOCKET

    connect(socketClientBanque, &QTcpSocket::connected, this, &DAB_MainWindow::onQTcpSocket_connected); // CONNEXION
    connect(socketClientBanque, &QTcpSocket::disconnected, this, &DAB_MainWindow::onQTcpSocket_disconnected); // DECONNEXION
    connect(socketClientBanque, &QTcpSocket::readyRead, this, &DAB_MainWindow::onQTcpSocket_readyRead); // CONNEXION readyread
}

DAB_MainWindow::~DAB_MainWindow() // DESTRUCTEUR
{
    delete ui;
}

void DAB_MainWindow::on_pushButtonConnexion_3_clicked() // CONNEXION A LADRESSE ET AU PORT SPECIFIEES
{
    qDebug() << "Le bouton Connexion a été cliqué";

    if(ui->pushButtonConnexion_3->text()=="Connexion"){
        quint16 port = static_cast<quint16>(ui->lineEditPort_3->text().toShort());
        QString adresse = ui->lineEditAdresse_3->text();
        socketClientBanque->connectToHost(adresse, port); //(adresse, port)
    } else{
        socketClientBanque->disconnectFromHost();
    }
}

void DAB_MainWindow::onQTcpSocket_connected() // AFFICHAGE DE LA CONNEXION ET CHANGEMENT DE TEXTE DU BOUTON "Connexion" en "Deconnexion"
{
    qDebug() << "T'es co";

    quint16 port = static_cast<quint16>(ui->lineEditPort_3->text().toShort());
    QString adresse = ui->lineEditAdresse_3->text();
    QString port2 = static_cast<QString>(port);

    ui->textEdit_3->setText("T'es connecté à l'adresse "+adresse+" et au port "+port2);
    ui->pushButtonConnexion_3->setText("Deconnexion");
    ui->pushButtonNumeroCompte_3->setEnabled(1);
    ui->pushButtonEnvoi_3->setEnabled(1);
}

void DAB_MainWindow::onQTcpSocket_disconnected() // AFFICHAGE DE LA DECONNEXION ET DU CHANGEMENT DE TEXTE DU BOUTON "Deconnexion" en "Connexion"
{
    qDebug() << "T'es déco";
    ui->textEdit_3->clear();
    ui->pushButtonConnexion_3->setText("Connexion");
    ui->pushButtonNumeroCompte_3->setDisabled(1);
    ui->pushButtonEnvoi_3->setDisabled(1);
}

void DAB_MainWindow::onQTcpSocket_Error(QAbstractSocket::SocketError socketError)
{
    QErrorMessage *TCPQErrorMessage = new QErrorMessage(this);

    QString message = "Oups une erreur !!! /n";
    message += socketClientBanque->errorString();
    TCPQErrorMessage->showMessage(message);
}

void DAB_MainWindow::onQTcpSocket_readyRead()
{
    quint16 taille = 0;
    QString message;
    QDataStream in(socketClientBanque);
    if (socketClientBanque->bytesAvailable() >= static_cast<quint16>(sizeof(taille)))
    {
        in >> taille;
        if (socketClientBanque->bytesAvailable() >= static_cast<quint16>(taille))
        {
            in >> message;
            qDebug() << message;
            ui->lineEditMessageBanque->clear();
            ui->lineEditMessageBanque->setText(message);
        }
    }
}

void DAB_MainWindow::on_pushButtonNumeroCompte_3_clicked()
{
    qDebug() << "Le bouton Numéro de compte a été cliqué";
    quint16 taille = 0;
    QChar commande = 'N';
    int compte = ui->lineEditNumeroCompte_3->text().toInt();
    QBuffer tampon;
    tampon.open(QIODevice::WriteOnly);
    QDataStream out(&tampon);
    out << taille << commande << compte;
    taille = static_cast<quint16>(tampon.size()) - static_cast<quint16>(sizeof(taille));
    tampon.seek(0);
    out << taille;
    //qDebug() << tampon.buffer();

    socketClientBanque->write(tampon.buffer());
}

void DAB_MainWindow::on_pushButtonEnvoi_3_clicked()
{
    if (ui->radioButtonSolde_3->isChecked())
    {
        qDebug() << "Le solde";

        quint16 taille = 0;
        QChar caractere = 'S';
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);
        QDataStream out(&tampon);
        out<<taille<<caractere;
        taille = static_cast<quint16>(tampon.size()) - static_cast<quint16>(sizeof(taille));
        tampon.seek(0);
        out << taille;
        socketClientBanque->write(tampon.buffer());
    }

    if (ui->radioButtonRetrait_3->isChecked())
    {
        qDebug() << "Le retrait";

        quint16 taille = 0;
        QChar caractere = 'R';
        int montant = ui->lineEditMontant_3->text().toInt();
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);
        QDataStream out(&tampon);
        out<<taille<<caractere << montant;
        taille = static_cast<quint16>(tampon.size()) - static_cast<quint16>(sizeof(taille));
        tampon.seek(0);
        out << taille;
        socketClientBanque->write(tampon.buffer());
    }

    if (ui->radioButtonDepot_3->isChecked())
    {
        qDebug() << "Le depot";

        quint16 taille = 0;
        QChar caractere = 'D';
        int montant = ui->lineEditMontant_3->text().toInt();
        QBuffer tampon;
        tampon.open(QIODevice::WriteOnly);
        QDataStream out(&tampon);
        out<<taille<<caractere << montant;
        taille = static_cast<quint16>(tampon.size()) - static_cast<quint16>(sizeof(taille));
        tampon.seek(0);
        out << taille;
        socketClientBanque->write(tampon.buffer());
    }
}
