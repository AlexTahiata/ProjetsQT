#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);

    socketEcouteServeur = new QTcpServer (this);        //création de la socket du serveur
    socketEcouteServeur->setMaxPendingConnections(2);   //serveur MULTICLIENTS avec 2 personne max en attente de connection

    //socketDialogueClient = new QTcpSocket (this);    //a ne pas faire, car on ne créer pas de client, c'est lui qui vient à nous.
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
    delete socketEcouteServeur; //destruction de l'allocation alloué à la socketEcouteServeur
}

void ServeurWidget::onQTcpServer_newConnection() //Fonction qui permet au client de se connecter
{
    //CODE MONOCLIENT
    /*socketDialogueClient = socketEcouteServeur->nextPendingConnection(); //serveur en attente de connection
    connect(socketDialogueClient, &QTcpSocket::readyRead, this, &ServeurWidget::onQTcpSocket_readyRead); // connection de la socket au readyread pour activer une méthode

    QHostAddress adresseClient = socketDialogueClient->peerAddress(); //Retourne l'adresse du client connecté
    ui->textEdit->append(adresseClient.toString()); //Ecriture de l'adresse du client en string dans le textEdit

    QTcpSocket *client;

    process = new QProcess (this); //this sinon qt détruit les connect ou objet ?

    connect(process,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutpout);*/








    //CODE MULTICLIENTS
    QTcpSocket *client;
    client = socketEcouteServeur->nextPendingConnection(); //serveur en attention de la prochaine connexion d'un client
    connect(client, &QTcpSocket::readyRead, this, &ServeurWidget::onQTcpSocket_readyRead); //connexion du client au readyRead en appellant la méthode indiquée

    QHostAddress adresseClient = client->peerAddress(); //récupération de l'adresse du client
    ui->textEdit->append(adresseClient.toString()); //affichage de l'adresse du client

    socketDialogueClient.append(client); //ajout de la socket du client dans la liste socketDialogueClient de type QTcpSocket

    QProcess *p = new QProcess(this); //création d'un process (en meme tant que l'on créer un QTcpSocket, on créer un QProcess)
    connect(p,&QProcess::readyReadStandardOutput,this,&ServeurWidget::onQProcess_readyReadStandardOutpout); //connection du process "p" créée au readyReadStandardOutput
    process.append(p); //ajout de la socket p dans la liste process de type QProcess


}

void ServeurWidget::onQTcpSocket_readyRead() // Fonction qui permet de lire les données du client
{
    //SERVEUR MONOCLIENT
    //QChar commande;
    /*if(socketDialogueClient->bytesAvailable())
    {
        QByteArray tmp=socketDialogueClient->readAll();
        commande = tmp.at(0); //prise de la lettre

        QString message = "Commande reçu de " + socketDialogueClient->peerAddress().toString() + " : ";
        message += commande;
        ui->textEdit->append(message);
        QString reponse;

        switch(commande.toLatin1())
        {
        case 'u' : reponse = getenv("USER");
            socketDialogueClient->write(reponse.toLatin1());
            break;
        case 'a' :
            process->start("uname",QStringList("-p"));
            break;
        case 'c' : reponse = QHostInfo::localHostName();
            socketDialogueClient->write(reponse.toLatin1());
            break;
        case 'o':
            process->start("uname");
        }
    }*/









    //SERVEUR MULTICLIENTS
    QChar commande;
    //déclaration du client
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender()); //récupération de la socket du client avec la méthode sender

    int indexProcess = socketDialogueClient.indexOf(client); //récupération de l'index du client qui est également celui du process associé
    //process.at(indexProcess)->start("uname");
    qDebug() << indexProcess;
    if(socketDialogueClient.at(indexProcess)->bytesAvailable())
    {
        QByteArray tmp=socketDialogueClient.at(indexProcess)->readAll();
        commande = tmp.at(0);

        QString message = "Commande reçu de " + socketDialogueClient.at(indexProcess)->peerAddress().toString() + " : ";
        message += commande;
        ui->textEdit->append(message);
        QString reponse;

        switch(commande.toLatin1())
        {
        case 'u' : reponse = getenv("LOGNAME");
            socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
            break;
        case 'a' :
            process.at(indexProcess)->start("uname",QStringList("-p"));
            break;
        case 'c' : reponse = QHostInfo::localHostName();
            socketDialogueClient.at(indexProcess)->write(reponse.toLatin1());
            break;
        case 'o':
            process.at(indexProcess)->start("uname");
        }
    }
    else {
        qDebug() << "probleme index at";
    }
}

void ServeurWidget::onQTcpSocket_disconnected()
{
    QTcpSocket *client = qobject_cast<QTcpSocket*>(sender());
    ui->textEdit->append("Deconnexion de " + client->peerAddress().toString());
    int index = socketDialogueClient.indexOf(client);
    socketDialogueClient.removeAt(index);
    process.removeAt(index);
}

void ServeurWidget::onQProcess_readyReadStandardOutpout()
{
    //MONOCLIENT
    /*QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
        QString message = "Réponse envoyée à"  +  socketDialogueClient->peerAddress().toString()+":"+reponse;
        ui->textEdit->append(message);
        socketDialogueClient->write(reponse.toLatin1());
    }*/




    //MULTICLIENTS
    QProcess *p = qobject_cast<QProcess*>(sender()); //récupération de la socket du process avec la méthode sender

    int indexClient = process.indexOf(p); //récupération de l'index du process
    QString reponse = p->readAllStandardOutput();
    if(!reponse.isEmpty()) //si la réponse est vide
    {
        QString message = "Reponse envoyée à " + socketDialogueClient.at(indexClient)->peerAddress().toString(); //chargement d'un message avec l'adresse du client
        ui->textEdit->append(message); //affichage du message
        socketDialogueClient.at(indexClient)->write(reponse.toUtf8()); //écriture de la reponse du client
    }
}

void ServeurWidget::on_pushButtonLancementServeur_clicked() //Fonction qui s'active au clic du bouton Lancement du serveur
{
    if(!socketEcouteServeur->listen(QHostAddress::Any,(static_cast<quint16>(ui->spinBoxNumeroPort->value()))))
    {
        QString message = "Impossible de démarrer le serveur" + socketEcouteServeur->errorString();
        qDebug() << "Lancement du serveur échoué";
        ui->textEdit->append(message);
        close();
    }
    else if(ui->pushButtonLancementServeur->text() == "Lancement serveur")
    {
        qDebug() << "Lancement du serveur";
        ui->textEdit->append("N° du port : " + QString::number(socketEcouteServeur->serverPort())); //affichage du port souhaité
        connect(socketEcouteServeur, &QTcpServer::newConnection, this, &ServeurWidget::onQTcpServer_newConnection);

        //ui->pushButtonLancementServeur->setEnabled(false); //ni possibilité de lancer le serveur
        ui->spinBoxNumeroPort->setEnabled(false); //ni de changer le port
        ui->pushButtonLancementServeur->setText("Deconnecter le serveur");
    }
    else if (ui->pushButtonLancementServeur->text() == "Deconnecter le serveur")
    {
        ui->pushButtonLancementServeur->setText("Lancement serveur");
        ui->spinBoxNumeroPort->setEnabled(true);
    }
}
