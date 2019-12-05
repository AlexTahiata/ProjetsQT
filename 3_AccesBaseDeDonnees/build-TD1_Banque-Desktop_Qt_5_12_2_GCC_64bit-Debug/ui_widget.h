/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxConnexion;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditBD;
    QLineEdit *lineEditLog;
    QLineEdit *lineEditMdp;
    QPushButton *pushButtonConnexion;
    QGroupBox *groupBoxAffichage;
    QPushButton *pushButtonAffichage;
    QTextEdit *textEditAffichage;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(684, 566);
        groupBoxConnexion = new QGroupBox(Widget);
        groupBoxConnexion->setObjectName(QString::fromUtf8("groupBoxConnexion"));
        groupBoxConnexion->setGeometry(QRect(30, 10, 561, 241));
        label_4 = new QLabel(groupBoxConnexion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 170, 81, 16));
        label_3 = new QLabel(groupBoxConnexion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 130, 58, 16));
        label_2 = new QLabel(groupBoxConnexion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 90, 91, 16));
        label = new QLabel(groupBoxConnexion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 61, 16));
        lineEditIP = new QLineEdit(groupBoxConnexion);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        lineEditIP->setGeometry(QRect(160, 50, 113, 24));
        lineEditBD = new QLineEdit(groupBoxConnexion);
        lineEditBD->setObjectName(QString::fromUtf8("lineEditBD"));
        lineEditBD->setGeometry(QRect(160, 90, 113, 24));
        lineEditLog = new QLineEdit(groupBoxConnexion);
        lineEditLog->setObjectName(QString::fromUtf8("lineEditLog"));
        lineEditLog->setGeometry(QRect(160, 130, 113, 24));
        lineEditMdp = new QLineEdit(groupBoxConnexion);
        lineEditMdp->setObjectName(QString::fromUtf8("lineEditMdp"));
        lineEditMdp->setGeometry(QRect(160, 170, 113, 24));
        pushButtonConnexion = new QPushButton(groupBoxConnexion);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(299, 80, 231, 24));
        groupBoxAffichage = new QGroupBox(Widget);
        groupBoxAffichage->setObjectName(QString::fromUtf8("groupBoxAffichage"));
        groupBoxAffichage->setEnabled(false);
        groupBoxAffichage->setGeometry(QRect(60, 280, 521, 221));
        pushButtonAffichage = new QPushButton(groupBoxAffichage);
        pushButtonAffichage->setObjectName(QString::fromUtf8("pushButtonAffichage"));
        pushButtonAffichage->setGeometry(QRect(100, 40, 281, 24));
        textEditAffichage = new QTextEdit(groupBoxAffichage);
        textEditAffichage->setObjectName(QString::fromUtf8("textEditAffichage"));
        textEditAffichage->setGeometry(QRect(70, 70, 371, 141));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(270, 520, 80, 24));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        groupBoxConnexion->setTitle(QApplication::translate("Widget", "Connexion", nullptr));
        label_4->setText(QApplication::translate("Widget", "Mot de passe", nullptr));
        label_3->setText(QApplication::translate("Widget", "Login", nullptr));
        label_2->setText(QApplication::translate("Widget", "Nom de la bdd", nullptr));
        label->setText(QApplication::translate("Widget", "Adresse IP", nullptr));
        pushButtonConnexion->setText(QApplication::translate("Widget", "Connexion \303\240 la base de donn\303\251es", nullptr));
        groupBoxAffichage->setTitle(QApplication::translate("Widget", "Affichage infos comptes", nullptr));
        pushButtonAffichage->setText(QApplication::translate("Widget", "Afficher les informations de tous les comptes", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
