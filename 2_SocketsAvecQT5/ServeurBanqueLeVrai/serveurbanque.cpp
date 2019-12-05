#include "serveurbanque.h"

ServeurBanque::ServeurBanque(QObject *parent):QTcpServer(parent)
{
    if(!connect(this, &QTcpServer::newConnection, this, &ServeurBanque::onServeurBanque_newConnection))
    {
        /*QMessageBox message;
        message.setText("La liaison n'a pas eu lieu");
        message.exec();*/
    }
}

void ServeurBanque::onServeurBanque_newConnection()
{
    QTcpSocket *client;
    client = this->nextPendingConnection();

    QHostAddress adresseClient = client->peerAddress();
    qDebug() << "L'adresse du client est : " + adresseClient.toString();

    QMessageBox message;
    message.setText("La liaison n'a pas eu lieu");
    message.exec();


    //Code demandé :

}

void ServeurBanque::Start()
{
    if(!listen(QHostAddress::Any,8888))
    {
        //QString message = "Impossible de démarrer le serveur" + this->errorString();
        qDebug() << "Impossible de démarrer le serveur";
    }
}

void ServeurBanque::Stop()
{
    this->close();
}
