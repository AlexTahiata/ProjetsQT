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
    QFile fichierSortie("Texte.txt");
    if (!fichierSortie.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << fichierSortie.errorString();
    }
    else
    {
        QTextStream out(&fichierSortie);
        out << "Deux sept zero ";
        out << "Toujours plus haut " << 93 << "\n";
        fichierSortie.close();
    }
}

void Widget::on_pushButton_2_clicked()
{
    QFile fichier("Texte.txt");
    if (!fichier.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << fichier.errorString();
    }
    else
    {
        QTextStream in(&fichier);
        while(!in.atEnd())
        {
            QString line = in.readLine();
            qDebug() << line;
        }
    }
}

void Widget::on_pushButton_3_clicked()
{
    QFile fichierSortieBinaire("Texte.bin");
    if (!fichierSortieBinaire.open(QIODevice::WriteOnly))
    {
        qDebug() << fichierSortieBinaire.errorString();
    }
    else
    {
        QDataStream out (&fichierSortieBinaire);
        QString nomOut = "Bidochon";
        QString prenomOut = "Robert";
        int ageOut = 54;
        double tailleOut = 1.65;
        QChar sexeOut = 'M';
        out << nomOut<<prenomOut<<ageOut<<tailleOut<<sexeOut;

        fichierSortieBinaire.close();
    }
}

void Widget::on_pushButton_4_clicked()
{
    /*QString nomFichier = QFileDialog::getOpenFileName(this,
                                                      tr("Ouvrir fichier"),
                                                      "/home/",
                                                      tr("Fichiers images (*.png *.jpg *.gif";;Fichiers texte (*.txt);;Tous les fichiers))*/
            QFile fichierEntreeBinaire("Texte.bin");
    if (!fichierEntreeBinaire.open(QIODevice::ReadOnly))
    {
        qDebug() << fichierEntreeBinaire.errorString();
    }
    else
    {
        QDataStream in (&fichierEntreeBinaire);
        QString nom;
        QString prenom;
        int age;
        double taille;
        QChar sexe;
        in>>nom>>prenom>>age>>taille>>sexe;
        qDebug()<<nom<<prenom<<age<<taille<<sexe;

        fichierEntreeBinaire.close();
    }
}
