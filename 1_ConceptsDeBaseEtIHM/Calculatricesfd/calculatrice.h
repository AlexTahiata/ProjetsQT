#ifndef CALCULATRICE_H
#define CALCULATRICE_H

#include <QWidget>

namespace Ui {
class Calculatrice;
}

class Calculatrice : public QWidget
{
    Q_OBJECT

public:
    explicit Calculatrice(QWidget *parent = nullptr);
    ~Calculatrice();

private:
    Ui::Calculatrice *ui;
};

#endif // CALCULATRICE_H
