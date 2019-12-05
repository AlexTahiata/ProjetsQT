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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *labelNomDep;
    QComboBox *comboBoxRegion;
    QComboBox *comboBoxDep;
    QComboBox *comboBoxVille;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNumDep;
    QPushButton *pushButtonAvoirNomDep;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(605, 280);
        labelNomDep = new QLabel(Widget);
        labelNomDep->setObjectName(QString::fromUtf8("labelNomDep"));
        labelNomDep->setGeometry(QRect(20, 80, 221, 16));
        comboBoxRegion = new QComboBox(Widget);
        comboBoxRegion->setObjectName(QString::fromUtf8("comboBoxRegion"));
        comboBoxRegion->setGeometry(QRect(20, 110, 161, 24));
        comboBoxDep = new QComboBox(Widget);
        comboBoxDep->setObjectName(QString::fromUtf8("comboBoxDep"));
        comboBoxDep->setGeometry(QRect(190, 110, 191, 24));
        comboBoxVille = new QComboBox(Widget);
        comboBoxVille->setObjectName(QString::fromUtf8("comboBoxVille"));
        comboBoxVille->setGeometry(QRect(390, 110, 181, 24));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 40, 551, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditNumDep = new QLineEdit(widget);
        lineEditNumDep->setObjectName(QString::fromUtf8("lineEditNumDep"));

        horizontalLayout->addWidget(lineEditNumDep);

        pushButtonAvoirNomDep = new QPushButton(widget);
        pushButtonAvoirNomDep->setObjectName(QString::fromUtf8("pushButtonAvoirNomDep"));

        horizontalLayout->addWidget(pushButtonAvoirNomDep);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        labelNomDep->setText(QApplication::translate("Widget", "Nom du d\303\251partement", nullptr));
        comboBoxRegion->setCurrentText(QString());
        label->setText(QApplication::translate("Widget", "Donnez un num\303\251ro de d\303\251partement", nullptr));
        pushButtonAvoirNomDep->setText(QApplication::translate("Widget", "Avoir le nom du d\303\251partement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
