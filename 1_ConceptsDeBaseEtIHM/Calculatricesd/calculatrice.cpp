#include "calculatrice.h"
#include "ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculatrice)
{
    ui->setupUi(this);

    //Connexion entre un bouton et l

    connect(ui->pushButton0, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton1, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton2, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton3, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton4, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton5, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton6, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton7, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton8, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButton9, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButtonPlus, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButtonMoins, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButtonDiviser, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
    connect(ui->pushButtonMultiplier, &QPushButton::clicked, this, &Calculatrice::onQPushButtonClicked);
}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::on_pushButtonEgal_clicked()
{
    QScriptEngine chong;
    QString ching = ui->lineEditAfficheur->text();
    QScriptValue chingchong = chong.evaluate(ching);
    ui->lineEditAfficheur->setText(chingchong.toString());
}

void Calculatrice::on_pushButtonClear_clicked()
{
    ui->lineEditAfficheur->clear();
}

void Calculatrice::onQPushButtonClicked()
{
    //Récupération de l'objet à l'origine du click
    QPushButton*touche;
    touche=qobject_cast<QPushButton*>(sender());

    //Récupération du text du bouton pour l'ajouter à l'afficheur
    QString ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching+touche->text());
}
