/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidgetPoids;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLineEdit *lineEditPrenom;
    QLabel *labelSexe;
    QRadioButton *radioButtonFemme;
    QSpinBox *spinBoxAge;
    QLabel *labelAge;
    QLabel *labelNom;
    QRadioButton *radioButtonHomme;
    QDoubleSpinBox *doubleSpinBoxPoids;
    QDoubleSpinBox *doubleSpinBoxTaille;
    QLabel *labelPoids;
    QLabel *labelTaille;
    QLabel *labelPrenom;
    QPushButton *pushButtonSuite;
    QLineEdit *lineEditNom;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QPushButton *pushButtonDevine;
    QPushButton *pushButtonLorentz;
    QPushButton *pushButtonLorentzAge;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(599, 517);
        tabWidgetPoids = new QTabWidget(Widget);
        tabWidgetPoids->setObjectName(QString::fromUtf8("tabWidgetPoids"));
        tabWidgetPoids->setGeometry(QRect(90, 110, 401, 361));
        tabWidgetPoids->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditPrenom = new QLineEdit(tab);
        lineEditPrenom->setObjectName(QString::fromUtf8("lineEditPrenom"));

        gridLayout->addWidget(lineEditPrenom, 1, 1, 1, 3);

        labelSexe = new QLabel(tab);
        labelSexe->setObjectName(QString::fromUtf8("labelSexe"));

        gridLayout->addWidget(labelSexe, 2, 0, 1, 1);

        radioButtonFemme = new QRadioButton(tab);
        radioButtonFemme->setObjectName(QString::fromUtf8("radioButtonFemme"));

        gridLayout->addWidget(radioButtonFemme, 2, 1, 1, 2);

        spinBoxAge = new QSpinBox(tab);
        spinBoxAge->setObjectName(QString::fromUtf8("spinBoxAge"));
        spinBoxAge->setMinimum(1);
        spinBoxAge->setMaximum(200);
        spinBoxAge->setStepType(QAbstractSpinBox::DefaultStepType);

        gridLayout->addWidget(spinBoxAge, 3, 1, 1, 3);

        labelAge = new QLabel(tab);
        labelAge->setObjectName(QString::fromUtf8("labelAge"));

        gridLayout->addWidget(labelAge, 3, 0, 1, 1);

        labelNom = new QLabel(tab);
        labelNom->setObjectName(QString::fromUtf8("labelNom"));

        gridLayout->addWidget(labelNom, 0, 0, 1, 1);

        radioButtonHomme = new QRadioButton(tab);
        radioButtonHomme->setObjectName(QString::fromUtf8("radioButtonHomme"));

        gridLayout->addWidget(radioButtonHomme, 2, 3, 1, 1);

        doubleSpinBoxPoids = new QDoubleSpinBox(tab);
        doubleSpinBoxPoids->setObjectName(QString::fromUtf8("doubleSpinBoxPoids"));
        doubleSpinBoxPoids->setMinimum(15.000000000000000);
        doubleSpinBoxPoids->setMaximum(300.000000000000000);
        doubleSpinBoxPoids->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBoxPoids, 4, 1, 1, 3);

        doubleSpinBoxTaille = new QDoubleSpinBox(tab);
        doubleSpinBoxTaille->setObjectName(QString::fromUtf8("doubleSpinBoxTaille"));
        doubleSpinBoxTaille->setMinimum(0.500000000000000);
        doubleSpinBoxTaille->setMaximum(3.000000000000000);
        doubleSpinBoxTaille->setSingleStep(0.010000000000000);
        doubleSpinBoxTaille->setValue(0.500000000000000);

        gridLayout->addWidget(doubleSpinBoxTaille, 5, 1, 1, 3);

        labelPoids = new QLabel(tab);
        labelPoids->setObjectName(QString::fromUtf8("labelPoids"));

        gridLayout->addWidget(labelPoids, 4, 0, 1, 1);

        labelTaille = new QLabel(tab);
        labelTaille->setObjectName(QString::fromUtf8("labelTaille"));

        gridLayout->addWidget(labelTaille, 5, 0, 1, 1);

        labelPrenom = new QLabel(tab);
        labelPrenom->setObjectName(QString::fromUtf8("labelPrenom"));

        gridLayout->addWidget(labelPrenom, 1, 0, 1, 1);

        pushButtonSuite = new QPushButton(tab);
        pushButtonSuite->setObjectName(QString::fromUtf8("pushButtonSuite"));

        gridLayout->addWidget(pushButtonSuite, 6, 2, 1, 1);

        lineEditNom = new QLineEdit(tab);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));

        gridLayout->addWidget(lineEditNom, 0, 1, 1, 3);

        tabWidgetPoids->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 381, 221));
        pushButtonDevine = new QPushButton(tab_2);
        pushButtonDevine->setObjectName(QString::fromUtf8("pushButtonDevine"));
        pushButtonDevine->setGeometry(QRect(50, 240, 301, 24));
        pushButtonLorentz = new QPushButton(tab_2);
        pushButtonLorentz->setObjectName(QString::fromUtf8("pushButtonLorentz"));
        pushButtonLorentz->setGeometry(QRect(50, 270, 301, 24));
        pushButtonLorentzAge = new QPushButton(tab_2);
        pushButtonLorentzAge->setObjectName(QString::fromUtf8("pushButtonLorentzAge"));
        pushButtonLorentzAge->setGeometry(QRect(50, 300, 301, 24));
        tabWidgetPoids->addTab(tab_2, QString());
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(260, 480, 80, 24));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        tabWidgetPoids->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelSexe->setText(QApplication::translate("Widget", "Sexe", nullptr));
        radioButtonFemme->setText(QApplication::translate("Widget", "Femme", nullptr));
        labelAge->setText(QApplication::translate("Widget", "Age", nullptr));
        labelNom->setText(QApplication::translate("Widget", "Nom", nullptr));
        radioButtonHomme->setText(QApplication::translate("Widget", "Homme", nullptr));
        labelPoids->setText(QApplication::translate("Widget", "Poids (kg)", nullptr));
        labelTaille->setText(QApplication::translate("Widget", "Taille (m)", nullptr));
        labelPrenom->setText(QApplication::translate("Widget", "Pr\303\251nom", nullptr));
        pushButtonSuite->setText(QApplication::translate("Widget", "Suite", nullptr));
        tabWidgetPoids->setTabText(tabWidgetPoids->indexOf(tab), QApplication::translate("Widget", "Informations personnelles", nullptr));
        textEdit->setHtml(QApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButtonDevine->setText(QApplication::translate("Widget", "Poids id\303\251al formule de devine", nullptr));
        pushButtonLorentz->setText(QApplication::translate("Widget", "Poids id\303\251al formule de lorentz", nullptr));
        pushButtonLorentzAge->setText(QApplication::translate("Widget", "Poids id\303\251al formule de lorentz en fonction de l'age", nullptr));
        tabWidgetPoids->setTabText(tabWidgetPoids->indexOf(tab_2), QApplication::translate("Widget", "Calcul du poids id\303\251al", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
