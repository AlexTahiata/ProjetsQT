#include <QCoreApplication>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase bd;
    bd = QSqlDatabase::addDatabase("QMYSQL");

    //bd.addDatabase("QMYSQL");
    bd.setHostName("172.18.58.14");
    bd.setDatabaseName("france2015plus");
    bd.setUserName("snir");
    bd.setPassword("snir");

    if (!bd.open())
    {
        qDebug() << "pb acces bd" << bd.lastError();
    }
    else
    {
        qDebug() << "acces bd ok";
        QSqlQuery requete("select departement_nom from departements;");
        if (!requete.exec())
        {
            qDebug() << "Pb execution requete" << requete.lastError();
        }
        else
        {
            qDebug() << "Nombre de département : " << requete.size();
            QString nomDepartement;
            while (requete.next())
            {
                nomDepartement = requete.value("departement_nom").toString();
                qDebug() << nomDepartement;
            }
        }

        QSqlQuery requetePrepare;
        requetePrepare.prepare("select departement_nom from departements where "
                               "departement_region_id =:idr");
        requetePrepare.bindValue(":idr", 5);
        if (!requetePrepare.exec())
        {
            qDebug() << "Pb execution requete" << requete.lastError();
        }
        qDebug() << "Nombre de département dans la région : " << requetePrepare.size();

        QString nomDep;
        while (requetePrepare.next())
        {
            nomDep = requetePrepare.value("departement_nom").toString();
            qDebug() << nomDep;
        }

    }

    return a.exec();
}
