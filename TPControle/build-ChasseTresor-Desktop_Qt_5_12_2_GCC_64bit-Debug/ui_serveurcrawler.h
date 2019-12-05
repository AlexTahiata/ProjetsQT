/********************************************************************************
** Form generated from reading UI file 'serveurcrawler.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURCRAWLER_H
#define UI_SERVEURCRAWLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurCrawler
{
public:
    QPushButton *pushButtonQuitter;
    QPushButton *pushButtonLancement;
    QSpinBox *spinBoxPort;
    QLabel *label;

    void setupUi(QWidget *ServeurCrawler)
    {
        if (ServeurCrawler->objectName().isEmpty())
            ServeurCrawler->setObjectName(QString::fromUtf8("ServeurCrawler"));
        ServeurCrawler->resize(400, 300);
        pushButtonQuitter = new QPushButton(ServeurCrawler);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(220, 150, 80, 24));
        pushButtonLancement = new QPushButton(ServeurCrawler);
        pushButtonLancement->setObjectName(QString::fromUtf8("pushButtonLancement"));
        pushButtonLancement->setGeometry(QRect(100, 150, 80, 24));
        spinBoxPort = new QSpinBox(ServeurCrawler);
        spinBoxPort->setObjectName(QString::fromUtf8("spinBoxPort"));
        spinBoxPort->setGeometry(QRect(210, 200, 91, 25));
        spinBoxPort->setMaximum(9999);
        spinBoxPort->setValue(1050);
        label = new QLabel(ServeurCrawler);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 205, 81, 16));

        retranslateUi(ServeurCrawler);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurCrawler, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurCrawler);
    } // setupUi

    void retranslateUi(QWidget *ServeurCrawler)
    {
        ServeurCrawler->setWindowTitle(QApplication::translate("ServeurCrawler", "ServeurCrawler", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurCrawler", "Quitter", nullptr));
        pushButtonLancement->setText(QApplication::translate("ServeurCrawler", "Lancement", nullptr));
        label->setText(QApplication::translate("ServeurCrawler", "Port d'\303\251coute", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurCrawler: public Ui_ServeurCrawler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURCRAWLER_H
