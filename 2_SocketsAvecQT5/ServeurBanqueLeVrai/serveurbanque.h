#ifndef SERVEURBANQUE_H
#define SERVEURBANQUE_H

#include <compteclient.h>
#include <QTcpServer>
#include <QMessageBox>
#include <QDebug>

class ServeurBanque : public QTcpServer
{
private:
    QList <CompteClient *> lesConnexionsClients;
public:
    ServeurBanque(QObject *parent=nullptr);
    void onServeurBanque_newConnection();
    void onCompteClient_disconnected();
    void onCompteClient_readyRead();

    void Start();
    void Stop();
    void EnvoyerMessage(QString msg, CompteClient *client);
};

#endif // SERVEURBANQUE_H
