#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QSqlDatabase bd;
    bd = QSqlDatabase::addDatabase("QMYSQL");

    bd.setHostName("172.18.58.7");
    bd.setDatabaseName("france2018");
    bd.setUserName("snir");
    bd.setPassword("snir");

    if (!bd.open())
    {
        qDebug() << "pb acces bd" << bd.lastError();
    }
    else
    {
        qDebug() << "acces bd ok";
    }

    //COMBOBOX
    QSqlQuery requete("select regions.code, regions.name from regions order by regions.name;" );
    if (!requete.exec()){
        qDebug()<<"pb requete "<<requete.lastError();
    }
    QString nom;
    int id;

    ui->comboBoxRegion->addItem("Choisissez une région");
    while(requete.next())
    {
        nom=requete.value("regions.name").toString();
        id=requete.value("regions.code").toInt();
        ui->comboBoxRegion->addItem(nom,id);
    }
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonAvoirNomDep_clicked()
{
    QSqlQuery requete;
    requete.prepare("select departments.name from departments where "
                    "departments.code = :idr");
    QString a = ui->lineEditNumDep->text();
    requete.bindValue(":idr", a);

    if (!requete.exec())
    {
        qDebug() << "Pb execution requete" << requete.lastError();
    }

    QString nomDepartement;

    while (requete.next())
    {
        nomDepartement = requete.value("departments.name").toString();
        ui->labelNomDep->setText(nomDepartement);
    }
}

void Widget::on_comboBoxRegion_currentIndexChanged(int index)
{
    // vider la liste des departements
    ui->comboBoxDep->clear();

    // affichage du choix de departements
    ui->comboBoxDep->addItem("Choisissez un département");

    // recupere l'id de la region
    int idRegion=ui->comboBoxRegion->itemData(index).toInt();

    QSqlQuery requete;
    requete.prepare("select departments.code, departments.name FROM departments WHERE "
                    "departments.region_code = :odd");

    requete.bindValue(":odd", idRegion);

    if (!requete.exec())
    {
        qDebug() << "Pb execution requete" << requete.lastError();
    }

    int idDep;
    QString nomDep;

    while(requete.next())
    {
        //ui->comboBoxRegion->addItem(nom,id);
        nomDep = requete.value("departments.name").toString();
        idDep = requete.value("departments.code").toInt();
        ui->comboBoxDep->addItem(nomDep, idDep);
    }
}


void Widget::on_comboBoxDep_currentIndexChanged(int index)
{
    // vider la liste des villes
    ui->comboBoxVille->clear();

    // affichage du choix de villes
    ui->comboBoxVille->addItem("Choisissez une ville");

    // recupere l'id du departement
    int idDep=ui->comboBoxDep->itemData(index).toInt();

    QSqlQuery requete;
    requete.prepare("select cities.name FROM cities WHERE "
                    "cities.department_code = :odda");

    requete.bindValue(":odda", idDep);

    if (!requete.exec())
    {
        qDebug() << "Pb execution requete" << requete.lastError();
    }

    QString nomVille;

    while(requete.next())
    {
        nomVille = requete.value("cities.name").toString();
        ui->comboBoxVille->addItem(nomVille);
    }
}
