#ifndef PARTIEOPERATIVE_H
#define PARTIEOPERATIVE_H

#include <QWidget>
#include <QQueue>
#include <barquette.h>
#include <QTimer>

namespace Ui {
class PartieOperative;
}

class PartieOperative : public QWidget
{
    Q_OBJECT

public:
    explicit PartieOperative(QWidget *parent = nullptr);
    ~PartieOperative();
    void timeOut();

private slots:
    void on_pushButtonNouvelleBarquette_clicked();

    void on_pushButtonDebutProduction_clicked();

    void on_pushButtonArretProduction_clicked();

    void on_EjecteurTrouve();

private:
    Ui::PartieOperative *ui;

    QQueue <Barquette *> fileBarquettes;
    QTimer timerPo;
    QList <Barquette *> tapis;
};

#endif // PARTIEOPERATIVE_H
