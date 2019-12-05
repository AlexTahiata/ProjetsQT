#ifndef DAB_MAINWINDOW_H
#define DAB_MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QErrorMessage>
#include <QString>
#include <QChar>
#include <QBuffer>
#include <QIODevice>
#include <QDataStream>

namespace Ui {
class DAB_MainWindow;
}

class DAB_MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DAB_MainWindow(QWidget *parent = nullptr);
    ~DAB_MainWindow();

private slots:
    void on_pushButtonConnexion_3_clicked();

    void on_pushButtonNumeroCompte_3_clicked();

    void on_pushButtonEnvoi_3_clicked();

private:
    Ui::DAB_MainWindow *ui;
    QTcpSocket *socketClientBanque;
    QString typeDeDemande;

    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_Error(QAbstractSocket::SocketError socketError);
    void onQTcpSocket_readyRead();
};

#endif // DAB_MAINWINDOW_H
