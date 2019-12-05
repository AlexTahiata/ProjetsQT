#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>
#include <QScriptEngine>

namespace Ui {
class Calculatrice;
}

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    explicit Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

private slots:
    void on_pushButtonEgal_clicked();

    void on_pushButtonClear_clicked();

    void onQPushButtonClicked();

private:
    Ui::Calculatrice *ui;
};

#endif // CALCULATRICE_H
