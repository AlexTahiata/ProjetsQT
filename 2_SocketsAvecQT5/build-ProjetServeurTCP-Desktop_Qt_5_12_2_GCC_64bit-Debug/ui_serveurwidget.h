/********************************************************************************
** Form generated from reading UI file 'serveurwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVEURWIDGET_H
#define UI_SERVEURWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ServeurWidget
{
public:
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButtonLancementServeur;
    QPushButton *pushButtonQuitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBoxNumeroPort;

    void setupUi(QWidget *ServeurWidget)
    {
        if (ServeurWidget->objectName().isEmpty())
            ServeurWidget->setObjectName(QString::fromUtf8("ServeurWidget"));
        ServeurWidget->resize(309, 265);
        label_2 = new QLabel(ServeurWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 58, 16));
        textEdit = new QTextEdit(ServeurWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 90, 291, 131));
        pushButtonLancementServeur = new QPushButton(ServeurWidget);
        pushButtonLancementServeur->setObjectName(QString::fromUtf8("pushButtonLancementServeur"));
        pushButtonLancementServeur->setGeometry(QRect(10, 40, 291, 24));
        pushButtonQuitter = new QPushButton(ServeurWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(10, 230, 291, 24));
        layoutWidget = new QWidget(ServeurWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 291, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        spinBoxNumeroPort = new QSpinBox(layoutWidget);
        spinBoxNumeroPort->setObjectName(QString::fromUtf8("spinBoxNumeroPort"));
        spinBoxNumeroPort->setMaximum(9999);

        horizontalLayout->addWidget(spinBoxNumeroPort);


        retranslateUi(ServeurWidget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), ServeurWidget, SLOT(close()));

        QMetaObject::connectSlotsByName(ServeurWidget);
    } // setupUi

    void retranslateUi(QWidget *ServeurWidget)
    {
        ServeurWidget->setWindowTitle(QApplication::translate("ServeurWidget", "ServeurWidget", nullptr));
        label_2->setText(QApplication::translate("ServeurWidget", "Clients", nullptr));
        pushButtonLancementServeur->setText(QApplication::translate("ServeurWidget", "Lancement serveur", nullptr));
        pushButtonQuitter->setText(QApplication::translate("ServeurWidget", "Quiter", nullptr));
        label->setText(QApplication::translate("ServeurWidget", "Num\303\251ro de port", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServeurWidget: public Ui_ServeurWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVEURWIDGET_H
