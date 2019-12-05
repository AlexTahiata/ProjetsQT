/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QLabel *label;
    QSpinBox *spinBoxPort;
    QPushButton *pushButtonLancementServeur;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QString::fromUtf8("ServeurWidget"));
        ServeurWidget->resize(332, 315);
        label = new QLabel(ServeurWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 101, 16));
        spinBoxPort = new QSpinBox(ServeurWidget);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setGeometry(QRect(170, 30, 131, 25));
        spinBoxPort->setMaximum(9999);
        spinBoxPort->setValue(1025);
        pushButtonLancementServeur = new QPushButton(ServeurWidget);
        pushButtonLancementServeur->setObjectName(QString::fromUtf8("pushButtonLancementServeur"));
        pushButtonLancementServeur->setGeometry(QRect(30, 70, 271, 24));
        label_2 = new QLabel(ServeurWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 110, 58, 16));
        textEdit = new QTextEdit(ServeurWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 140, 271, 111));
        pushButtonQuitter = new QPushButton(ServeurWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(30, 260, 271, 24));

        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        label->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
        pushButtonLancementServeur->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        label_2->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
