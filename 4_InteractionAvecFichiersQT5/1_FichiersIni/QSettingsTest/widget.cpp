#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QString adresseIp;
    int numeroPort;
    QChar h,d,j;
    QString nomFichierIni = qApp->applicationName() + ".ini";
    QFileInfo testFichier(nomFichierIni);

    if (testFichier.exists() && testFichier.isFile())
    {
        QSettings paramsSocket(nomFichierIni, QSettings::IniFormat);
        adresseIp=paramsSocket.value("CONFIG/ip").toString();
        numeroPort=paramsSocket.value("CONFIG/port").toInt();
        d=paramsSocket.value("COMMANDES/date").toString().at(0);
        h=paramsSocket.value("COMMANDES/heure").toString().at(0);
        j=paramsSocket.value("COMMANDES/jour").toString().at(0);

        qDebug() << adresseIp<<numeroPort<<h<<d<<j;
    }
    else
    {
        qDebug() << "fichier ini non valide";
    }
}
