/********************************************************************************
** Form generated from reading UI file 'calculatrice.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICE_H
#define UI_CALCULATRICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculatrice
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEditAfficheur;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButton9;
    QPushButton *pushButtonPlus;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButtonMoins;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButton3;
    QPushButton *pushButtonMultiplier;
    QPushButton *pushButtonClear;
    QPushButton *pushButton0;
    QPushButton *pushButtonEgal;
    QPushButton *pushButtonDiviser;

    void setupUi(QWidget *Calculatrice)
    {
        if (Calculatrice->objectName().isEmpty())
            Calculatrice->setObjectName(QString::fromUtf8("Calculatrice"));
        Calculatrice->resize(586, 463);
        layoutWidget = new QWidget(Calculatrice);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 130, 340, 251));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEditAfficheur = new QLineEdit(layoutWidget);
        lineEditAfficheur->setObjectName(QString::fromUtf8("lineEditAfficheur"));

        gridLayout->addWidget(lineEditAfficheur, 0, 0, 1, 4);

        pushButton7 = new QPushButton(layoutWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));

        gridLayout->addWidget(pushButton7, 1, 0, 1, 1);

        pushButton8 = new QPushButton(layoutWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));

        gridLayout->addWidget(pushButton8, 1, 1, 1, 1);

        pushButton9 = new QPushButton(layoutWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));

        gridLayout->addWidget(pushButton9, 1, 2, 1, 1);

        pushButtonPlus = new QPushButton(layoutWidget);
        pushButtonPlus->setObjectName(QString::fromUtf8("pushButtonPlus"));

        gridLayout->addWidget(pushButtonPlus, 1, 3, 1, 1);

        pushButton4 = new QPushButton(layoutWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));

        gridLayout->addWidget(pushButton4, 2, 0, 1, 1);

        pushButton5 = new QPushButton(layoutWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));

        gridLayout->addWidget(pushButton5, 2, 1, 1, 1);

        pushButton6 = new QPushButton(layoutWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));

        gridLayout->addWidget(pushButton6, 2, 2, 1, 1);

        pushButtonMoins = new QPushButton(layoutWidget);
        pushButtonMoins->setObjectName(QString::fromUtf8("pushButtonMoins"));

        gridLayout->addWidget(pushButtonMoins, 2, 3, 1, 1);

        pushButton1 = new QPushButton(layoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));

        gridLayout->addWidget(pushButton1, 3, 0, 1, 1);

        pushButton2 = new QPushButton(layoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));

        gridLayout->addWidget(pushButton2, 3, 1, 1, 1);

        pushButton3 = new QPushButton(layoutWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));

        gridLayout->addWidget(pushButton3, 3, 2, 1, 1);

        pushButtonMultiplier = new QPushButton(layoutWidget);
        pushButtonMultiplier->setObjectName(QString::fromUtf8("pushButtonMultiplier"));

        gridLayout->addWidget(pushButtonMultiplier, 3, 3, 1, 1);

        pushButtonClear = new QPushButton(layoutWidget);
        pushButtonClear->setObjectName(QString::fromUtf8("pushButtonClear"));

        gridLayout->addWidget(pushButtonClear, 4, 0, 1, 1);

        pushButton0 = new QPushButton(layoutWidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButtonEgal = new QPushButton(layoutWidget);
        pushButtonEgal->setObjectName(QString::fromUtf8("pushButtonEgal"));

        gridLayout->addWidget(pushButtonEgal, 4, 2, 1, 1);

        pushButtonDiviser = new QPushButton(layoutWidget);
        pushButtonDiviser->setObjectName(QString::fromUtf8("pushButtonDiviser"));

        gridLayout->addWidget(pushButtonDiviser, 4, 3, 1, 1);


        retranslateUi(Calculatrice);

        QMetaObject::connectSlotsByName(Calculatrice);
    } // setupUi

    void retranslateUi(QWidget *Calculatrice)
    {
        Calculatrice->setWindowTitle(QApplication::translate("Calculatrice", "Calculatrice", nullptr));
        lineEditAfficheur->setText(QString());
        lineEditAfficheur->setPlaceholderText(QApplication::translate("Calculatrice", "affichage des op\303\251rations", nullptr));
        pushButton7->setText(QApplication::translate("Calculatrice", "7", nullptr));
        pushButton8->setText(QApplication::translate("Calculatrice", "8", nullptr));
        pushButton9->setText(QApplication::translate("Calculatrice", "9", nullptr));
        pushButtonPlus->setText(QApplication::translate("Calculatrice", "+", nullptr));
        pushButton4->setText(QApplication::translate("Calculatrice", "4", nullptr));
        pushButton5->setText(QApplication::translate("Calculatrice", "5", nullptr));
        pushButton6->setText(QApplication::translate("Calculatrice", "6", nullptr));
        pushButtonMoins->setText(QApplication::translate("Calculatrice", "-", nullptr));
        pushButton1->setText(QApplication::translate("Calculatrice", "1", nullptr));
        pushButton2->setText(QApplication::translate("Calculatrice", "2", nullptr));
        pushButton3->setText(QApplication::translate("Calculatrice", "3", nullptr));
        pushButtonMultiplier->setText(QApplication::translate("Calculatrice", "*", nullptr));
        pushButtonClear->setText(QApplication::translate("Calculatrice", "C", nullptr));
        pushButton0->setText(QApplication::translate("Calculatrice", "0", nullptr));
        pushButtonEgal->setText(QApplication::translate("Calculatrice", "=", nullptr));
        pushButtonDiviser->setText(QApplication::translate("Calculatrice", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculatrice: public Ui_Calculatrice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICE_H
