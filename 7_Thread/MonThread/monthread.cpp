#include "monthread.h"

MonThread::MonThread(QString _nom) :
    nom(_nom)
{

}

void MonThread::run()
{
    qDebug() <<"je suis le thread"<<nom;
    qDebug()<<"mon id est "<<currentThreadId();
    /*if(nom.toInt()%2==0)
    {
        emit monId((qint64)currentThreadId());
    }*/
}
