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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
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
    QTableWidget *tableWidget;
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
        groupBoxAffichage->setGeometry(QRect(60, 280, 521, 231));
        pushButtonAffichage = new QPushButton(groupBoxAffichage);
        pushButtonAffichage->setObjectName(QString::fromUtf8("pushButtonAffichage"));
        pushButtonAffichage->setGeometry(QRect(100, 40, 281, 24));
        tableWidget = new QTableWidget(groupBoxAffichage);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 80, 501, 141));
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
        lineEditIP->setText(QApplication::translate("Widget", "172.18.58.7", nullptr));
        lineEditBD->setText(QApplication::translate("Widget", "banque", nullptr));
        lineEditLog->setText(QApplication::translate("Widget", "snir", nullptr));
        lineEditMdp->setText(QApplication::translate("Widget", "snir", nullptr));
        pushButtonConnexion->setText(QApplication::translate("Widget", "Connexion \303\240 la base de donn\303\251es", nullptr));
        groupBoxAffichage->setTitle(QApplication::translate("Widget", "Affichage infos comptes", nullptr));
        pushButtonAffichage->setText(QApplication::translate("Widget", "Afficher les informations de tous les comptes", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "Num\303\251ro de compte", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "Solde", nullptr));
        pushButtonQuitter->setText(QApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
