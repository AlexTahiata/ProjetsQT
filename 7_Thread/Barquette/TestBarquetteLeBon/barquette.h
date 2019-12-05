#ifndef BARQUETTE_H
#define BARQUETTE_H

#include <QThread>
#include <QDebug>
#include <QMutex>
#include <QSemaphore>

class Barquette : public QThread
{
    Q_OBJECT
private:
    int emplacement;
    QString codeProduit;
    QSemaphore mutex;
public:
    Barquette(int _emplacement, int _codeProduit, QObject *parent=nullptr);
    void run();
    QString ObtenirCodeProduit();
signals:
    void EjecteurTrouve();
};

#endif // BARQUETTE_H
