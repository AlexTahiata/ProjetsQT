#ifndef SERVEURWIDGET_H
#define SERVEURWIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
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
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void onQProcess_readyReadStandardOutpout();

private slots:
    void on_pushButtonLancementServeur_clicked();

private:
    Ui::ServeurWidget *ui;
    QTcpServer *socketEcouteServeur;
    QTcpSocket *socketDialogueClient;
    QProcess *process;
    //QList <QTcpSocket *> socketDialogueClient;
    //QList <QProcess *> process;
};

#endif // SERVEURWIDGET_H
