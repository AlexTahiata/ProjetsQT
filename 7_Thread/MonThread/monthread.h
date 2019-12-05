#ifndef MONTHREAD_H
#define MONTHREAD_H
#include <QThread>
#include <QDebug>

class MonThread : public QThread
{
    Q_OBJECT
private:
    QString nom;
public:
    MonThread(QString _nom);
    void run();
signals:
    void monId(qint64 id);
};

#endif // MONTHREAD_H
