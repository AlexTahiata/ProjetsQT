#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonAvoirNomDep_clicked();

    void on_comboBoxRegion_currentIndexChanged(int index);


    void on_comboBoxDep_currentIndexChanged(int index);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
