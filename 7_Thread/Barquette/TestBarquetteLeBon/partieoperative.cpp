#include "partieoperative.h"
#include "ui_partieoperative.h"

PartieOperative::PartieOperative(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PartieOperative)
{
    ui->setupUi(this);
}

PartieOperative::~PartieOperative()
{
    delete ui;
}

void PartieOperative::timeOut()
{
    if (fileBarquettes.isEmpty())
    {
        //qDebug() << "La file barquette est vide";
    } else {
        {
            qDebug() << "La file barquette n'est pas vide";

            Barquette *pBarquette = fileBarquettes.dequeue();
            qDebug() << "Dernière barquette de la file type QQueue supprimé";
            tapis.append(pBarquette);
            qDebug() << "Ajout d'une barquette dans la liste type QList";
        }
    }
}

void PartieOperative::on_pushButtonNouvelleBarquette_clicked()
{
    int emplacement = ui->lineEditNumeroEjecteur->text().toInt();
    int codeProduit = ui->lineEditCodeProduit->text().toInt();
    Barquette *pBarquette;
    pBarquette = new Barquette(emplacement, codeProduit);
    qDebug() << "Création de la barquette";
    fileBarquettes.enqueue(pBarquette);
    qDebug() << "Ajout de la barquette dans la file type QQueue";

    //Connect de la barquette pBarquette avec le signal EjecteurTrouve en appella
    connect(pBarquette, &Barquette::EjecteurTrouve, this, &PartieOperative::on_EjecteurTrouve);
}

void PartieOperative::on_pushButtonDebutProduction_clicked()
{
    timerPo.start(250);
    qDebug() << "Timer lancé";
    connect(&timerPo, &QTimer::timeout, this, &PartieOperative::timeOut);
}

void PartieOperative::on_pushButtonArretProduction_clicked()
{
    timerPo.stop();
    qDebug() << "Timernator.. je reviendrais.";
}

void PartieOperative::on_EjecteurTrouve()
{
    //Méthode sender utilisée pour retrouver l'émetteur du signal actuel89*548
    Barquette *pBarquette = static_cast<Barquette*>(sender());
    int position = tapis.indexOf(pBarquette);
    tapis.removeAt(position);
    pBarquette->wait();
    pBarquette->deleteLater();
}
