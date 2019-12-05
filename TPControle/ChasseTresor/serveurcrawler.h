#ifndef SERVEURCRAWLER_H
#define SERVEURCRAWLER_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include <QGridLayout>
#include <QDebug>
#include <QDataStream>
#include <QByteArray>
#include <QRandomGenerator>
#include <QDateTime>
#include <QTimer>
#include <QBuffer>

namespace Ui {
class ServeurCrawler;
}

class ServeurCrawler : public QWidget
{
    Q_OBJECT

public:
    explicit ServeurCrawler(QWidget *parent = nullptr);
    ~ServeurCrawler();
    void onQTcpServer_newConnection();
    void onQTcpSocket_readyRead();
    void onQTcpSocket_disconnected();
    void EnvoyerDonnees(QTcpSocket *client, QPoint pt, QString msg);
    void AfficherGrille();
    void ViderGrille();
    QPoint DonnerPositionUnique();
    double CalculerDistance(QPoint pos);

private slots:
    void on_pushButtonLancement_clicked();

private:
    Ui::ServeurCrawler *ui;

    QTcpServer *socketEcoute;
    QList <QTcpSocket *>listeSocketsClient;
    QList <QPoint >listePositions;
    QPoint tresor;
    QGridLayout grille;
};

#endif // SERVEURCRAWLER_H
