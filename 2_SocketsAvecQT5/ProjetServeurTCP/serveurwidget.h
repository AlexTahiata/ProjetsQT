#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpSocket>
#include <QTcpServer>
#include <QDebug>
#include <QErrorMessage>
#include <QString>
#include <QChar>
#include <QBuffer>
#include <QIODevice>
#include <QDataStream>
#include <QHostInfo>
#include <QProcess>

namespace Ui {
class ServeurWidget;
}

class ServeurWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurWidget(QWidget *parent = nullptr);
    ~ServeurWidget();

    void onQTcpServer_newConnection(); // -> en cas de connection client
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQProcess_readyReadStandardOutpout();

private slots:
    void on_pushButtonLancementServeur_clicked();

private:
    Ui::ServeurWidget *ui;
    QTcpServer *socketEcouteServeur; //Création d'un objet dynamique de type QTcpServer ->tcpServeur

    //QTcpSocket *socketDialogueClient; //Création d'un objet dynamique de type QTcpSocket /POUR UN SERVEUR MONOCLIENT/
    //QProcess *process; //Création d'un objet dynamique de type QProcess /POUR UN SERVEUR MONOCLIENT/

    QList <QTcpSocket *>socketDialogueClient; //Création d'une liste d'objet dynamique de type QTcpSocket /POUR UN SERVEUR MONOCLIENT/ clientConnexion
    QList <QProcess *>process; //Création d'une liste d'objet dynamique de type QProcess /POUR UN SERVEUR MONOCLIENT/ ->process
};

#endif // SERVEURWIDGET_H
