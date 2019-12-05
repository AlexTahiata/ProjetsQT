/********************************************************************************
** Form generated from reading UI file 'partieoperative.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTIEOPERATIVE_H
#define UI_PARTIEOPERATIVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PartieOperative
{
public:
    QPushButton *pushButtonDebutProduction;
    QPushButton *pushButtonArretProduction;
    QPushButton *pushButtonQuitter;
    QGroupBox *groupBoxEtatCapteurs;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QGroupBox *groupBoxBarquette;
    QPushButton *pushButton;
    QLineEdit *lineEditNumeroEjecteur;
    QLineEdit *lineEditCodeProduit;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *PartieOperative)
    {
        if (PartieOperative->objectName().isEmpty())
            PartieOperative->setObjectName(QString::fromUtf8("PartieOperative"));
        PartieOperative->resize(519, 328);
        pushButtonDebutProduction = new QPushButton(PartieOperative);
        pushButtonDebutProduction->setObjectName(QString::fromUtf8("pushButtonDebutProduction"));
        pushButtonDebutProduction->setGeometry(QRect(20, 270, 141, 24));
        pushButtonArretProduction = new QPushButton(PartieOperative);
        pushButtonArretProduction->setObjectName(QString::fromUtf8("pushButtonArretProduction"));
        pushButtonArretProduction->setGeometry(QRect(190, 270, 141, 24));
        pushButtonQuitter = new QPushButton(PartieOperative);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(370, 270, 80, 24));
        groupBoxEtatCapteurs = new QGroupBox(PartieOperative);
        groupBoxEtatCapteurs->setObjectName(QString::fromUtf8("groupBoxEtatCapteurs"));
        groupBoxEtatCapteurs->setGeometry(QRect(40, 50, 131, 171));
        checkBox = new QCheckBox(groupBoxEtatCapteurs);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 40, 83, 22));
        checkBox_2 = new QCheckBox(groupBoxEtatCapteurs);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 70, 83, 22));
        checkBox_3 = new QCheckBox(groupBoxEtatCapteurs);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(20, 100, 83, 22));
        checkBox_4 = new QCheckBox(groupBoxEtatCapteurs);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(20, 130, 83, 22));
        groupBoxBarquette = new QGroupBox(PartieOperative);
        groupBoxBarquette->setObjectName(QString::fromUtf8("groupBoxBarquette"));
        groupBoxBarquette->setGeometry(QRect(200, 50, 271, 161));
        pushButton = new QPushButton(groupBoxBarquette);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 120, 131, 24));
        lineEditNumeroEjecteur = new QLineEdit(groupBoxBarquette);
        lineEditNumeroEjecteur->setObjectName(QString::fromUtf8("lineEditNumeroEjecteur"));
        lineEditNumeroEjecteur->setGeometry(QRect(140, 40, 113, 24));
        lineEditCodeProduit = new QLineEdit(groupBoxBarquette);
        lineEditCodeProduit->setObjectName(QString::fromUtf8("lineEditCodeProduit"));
        lineEditCodeProduit->setGeometry(QRect(140, 80, 113, 24));
        label = new QLabel(groupBoxBarquette);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 40, 111, 16));
        label_2 = new QLabel(groupBoxBarquette);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 81, 16));

        retranslateUi(PartieOperative);

        QMetaObject::connectSlotsByName(PartieOperative);
    } // setupUi

    void retranslateUi(QWidget *PartieOperative)
    {
        PartieOperative->setWindowTitle(QApplication::translate("PartieOperative", "PartieOperative", nullptr));
        pushButtonDebutProduction->setText(QApplication::translate("PartieOperative", "D\303\251but de production", nullptr));
        pushButtonArretProduction->setText(QApplication::translate("PartieOperative", "Arr\303\252t de Production", nullptr));
        pushButtonQuitter->setText(QApplication::translate("PartieOperative", "Quitter", nullptr));
        groupBoxEtatCapteurs->setTitle(QApplication::translate("PartieOperative", "Etat des capteurs", nullptr));
        checkBox->setText(QApplication::translate("PartieOperative", "Capteur 1", nullptr));
        checkBox_2->setText(QApplication::translate("PartieOperative", "Capteur 2", nullptr));
        checkBox_3->setText(QApplication::translate("PartieOperative", "Capteur 3", nullptr));
        checkBox_4->setText(QApplication::translate("PartieOperative", "Capteur 4", nullptr));
        groupBoxBarquette->setTitle(QApplication::translate("PartieOperative", "Barquette", nullptr));
        pushButton->setText(QApplication::translate("PartieOperative", "Nouvelle Barquette", nullptr));
        label->setText(QApplication::translate("PartieOperative", "Num\303\251ro d'\303\251jecteur", nullptr));
        label_2->setText(QApplication::translate("PartieOperative", "Code produit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PartieOperative: public Ui_PartieOperative {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTIEOPERATIVE_H
