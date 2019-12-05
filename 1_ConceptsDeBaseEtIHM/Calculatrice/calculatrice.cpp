#include "calculatrice.h"
#include "ui_calculatrice.h"

Calculatrice::Calculatrice(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calculatrice)
{
    ui->setupUi(this);
}

Calculatrice::~Calculatrice()
{
    delete ui;
}

void Calculatrice::on_pushButton0_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"0");
}

void Calculatrice::on_pushButton1_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"1");
}

void Calculatrice::on_pushButton2_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"2");
}

void Calculatrice::on_pushButton3_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"3");
}

void Calculatrice::on_pushButton4_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"4");
}

void Calculatrice::on_pushButton5_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"5");
}

void Calculatrice::on_pushButton6_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"6");
}

void Calculatrice::on_pushButton7_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"7");
}

void Calculatrice::on_pushButton8_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"8");
}

void Calculatrice::on_pushButton9_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"9");
}

void Calculatrice::on_pushButtonClear_clicked()
{
    ui->lineEditAfficheur->clear();
}

void Calculatrice::on_pushButtonDiviser_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"/");
}

void Calculatrice::on_pushButtonEgal_clicked()
{
    QScriptEngine chong;
    QString ching = ui->lineEditAfficheur->text();
    QScriptValue chingchong = chong.evaluate(ching);
    ui->lineEditAfficheur->setText(chingchong.toString());
}

void Calculatrice::on_pushButtonMoins_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"-");
}

void Calculatrice::on_pushButtonMultiplier_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"*");
}

void Calculatrice::on_pushButtonPlus_clicked()
{
    QString ching;
    ching = ui->lineEditAfficheur->text();
    ui->lineEditAfficheur->setText(ching +"+");
}

void Calculatrice::aaa()
{

}
