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

void Widget::on_pushButtonLancer_clicked()
{
    for (int i = 0; i < 5; i ++)
    {
        tab[i] = new MonThread(QString::number(i));
    }
}
