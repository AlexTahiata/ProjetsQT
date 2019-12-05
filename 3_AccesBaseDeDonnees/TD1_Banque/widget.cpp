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

void Widget::on_pushButtonConnexion_clicked()
{
    QSqlDatabase bd;
    bd = QSqlDatabase::addDatabase("QMYSQL");
    QString ipBd = ui->lineEditIP->text();
    QString nomBd = ui->lineEditBD->text();
    QString logBd = ui->lineEditLog->text();
    QString mdpBd = ui->lineEditMdp->text();
    bd.setHostName(ipBd);
    bd.setDatabaseName(nomBd);
    bd.setUserName(logBd);
    bd.setPassword(mdpBd);

    if (!bd.open())
    {
        qDebug() << "pb acces bd" << bd.lastError();
    }
    else
    {
        qDebug() << "acces bd ok";
        ui->groupBoxAffichage->setEnabled(1);
        ui->pushButtonConnexion->setEnabled(0);
    }
}

void Widget::on_pushButtonAffichage_clicked()
{
    QSqlQuery requete;
    requete.prepare("select comptes.nom, comptes.prenom, comptes.idCompte, comptes.solde from comptes");

    if (!requete.exec())
    {
        qDebug() << "Pb execution requete" << requete.lastError();
    }

    QString nom;
    QString prenom;
    int numeroCompte;
    int solde;
    int ligne=0;

    while (requete.next())
    {
        nom = requete.value("comptes.nom").toString();
        prenom = requete.value("comptes.prenom").toString();
        numeroCompte = requete.value("comptes.idCompte").toInt();
        solde = requete.value("comptes.solde").toInt();

        //AVEC UN QTEXTEDIT
        /*ui->textEditAffichage->append(nom);
        ui->textEditAffichage->append(prenom);
        ui->textEditAffichage->append(QString::number(numeroCompte));
        ui->textEditAffichage->append(QString::number(solde));*/

        //AVEC UN QTABLEWIDGET
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        int col=0;      // numero de la colonne
        // ajouter un nom
        QTableWidgetItem *nomItem = new QTableWidgetItem(nom);
        ui->tableWidget->setItem(ligne,col,nomItem);
        col++;
        // ajouter un prenom
        QTableWidgetItem *prenomItem = new QTableWidgetItem(prenom);
        ui->tableWidget->setItem(ligne,col,prenomItem);
        col++;
        // ajouter le numero de compte
        QTableWidgetItem *idCompteItem = new QTableWidgetItem(QString::number(numeroCompte));
        ui->tableWidget->setItem(ligne,col,idCompteItem);
        col++;
        // ajouter le solde
        QTableWidgetItem *soldeItem = new QTableWidgetItem(QString::number(solde));
        ui->tableWidget->setItem(ligne,col,soldeItem);
        ligne++;
    }
}
