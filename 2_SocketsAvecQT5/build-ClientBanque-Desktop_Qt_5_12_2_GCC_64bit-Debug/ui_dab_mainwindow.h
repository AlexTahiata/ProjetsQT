/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QLineEdit *lineEditNumeroCompte_3;
    QPushButton *pushButtonNumeroCompte_3;
    QLineEdit *lineEditMontant_3;
    QLabel *label_6;
    QRadioButton *radioButtonSolde_3;
    QRadioButton *radioButtonRetrait_3;
    QRadioButton *radioButtonDepot_3;
    QPushButton *pushButtonEnvoi_3;
    QGroupBox *groupBox;
    QLabel *labelEtatConnexion_3;
    QLineEdit *lineEditPort_3;
    QLabel *labelAdresse_3;
    QLabel *labelPort_3;
    QLineEdit *lineEditAdresse_3;
    QTextEdit *textEdit_3;
    QPushButton *pushButtonConnexion_3;
    QLabel *label;
    QLineEdit *lineEditMessageBanque;
    QPushButton *pushButtonQuitter;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QString::fromUtf8("DAB_MainWindow"));
        DAB_MainWindow->resize(702, 445);
        centralWidget = new QWidget(DAB_MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 220, 541, 171));
        lineEditNumeroCompte_3 = new QLineEdit(groupBox_2);
        lineEditNumeroCompte_3->setObjectName(QString::fromUtf8("lineEditNumeroCompte_3"));
        lineEditNumeroCompte_3->setGeometry(QRect(140, 50, 113, 24));
        pushButtonNumeroCompte_3 = new QPushButton(groupBox_2);
        pushButtonNumeroCompte_3->setObjectName(QString::fromUtf8("pushButtonNumeroCompte_3"));
        pushButtonNumeroCompte_3->setEnabled(false);
        pushButtonNumeroCompte_3->setGeometry(QRect(10, 50, 121, 24));
        pushButtonNumeroCompte_3->setMouseTracking(false);
        pushButtonNumeroCompte_3->setTabletTracking(false);
        pushButtonNumeroCompte_3->setAcceptDrops(false);
        pushButtonNumeroCompte_3->setAutoDefault(false);
        pushButtonNumeroCompte_3->setFlat(false);
        lineEditMontant_3 = new QLineEdit(groupBox_2);
        lineEditMontant_3->setObjectName(QString::fromUtf8("lineEditMontant_3"));
        lineEditMontant_3->setGeometry(QRect(140, 80, 113, 24));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 80, 58, 16));
        radioButtonSolde_3 = new QRadioButton(groupBox_2);
        radioButtonSolde_3->setObjectName(QString::fromUtf8("radioButtonSolde_3"));
        radioButtonSolde_3->setGeometry(QRect(410, 50, 100, 22));
        radioButtonSolde_3->setChecked(true);
        radioButtonRetrait_3 = new QRadioButton(groupBox_2);
        radioButtonRetrait_3->setObjectName(QString::fromUtf8("radioButtonRetrait_3"));
        radioButtonRetrait_3->setGeometry(QRect(410, 80, 100, 22));
        radioButtonDepot_3 = new QRadioButton(groupBox_2);
        radioButtonDepot_3->setObjectName(QString::fromUtf8("radioButtonDepot_3"));
        radioButtonDepot_3->setGeometry(QRect(410, 110, 100, 22));
        pushButtonEnvoi_3 = new QPushButton(groupBox_2);
        pushButtonEnvoi_3->setObjectName(QString::fromUtf8("pushButtonEnvoi_3"));
        pushButtonEnvoi_3->setEnabled(false);
        pushButtonEnvoi_3->setGeometry(QRect(410, 140, 80, 24));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, -20, 541, 231));
        labelEtatConnexion_3 = new QLabel(groupBox);
        labelEtatConnexion_3->setObjectName(QString::fromUtf8("labelEtatConnexion_3"));
        labelEtatConnexion_3->setGeometry(QRect(260, 30, 121, 16));
        lineEditPort_3 = new QLineEdit(groupBox);
        lineEditPort_3->setObjectName(QString::fromUtf8("lineEditPort_3"));
        lineEditPort_3->setGeometry(QRect(100, 70, 113, 24));
        labelAdresse_3 = new QLabel(groupBox);
        labelAdresse_3->setObjectName(QString::fromUtf8("labelAdresse_3"));
        labelAdresse_3->setGeometry(QRect(20, 30, 58, 16));
        labelPort_3 = new QLabel(groupBox);
        labelPort_3->setObjectName(QString::fromUtf8("labelPort_3"));
        labelPort_3->setGeometry(QRect(20, 80, 58, 16));
        lineEditAdresse_3 = new QLineEdit(groupBox);
        lineEditAdresse_3->setObjectName(QString::fromUtf8("lineEditAdresse_3"));
        lineEditAdresse_3->setGeometry(QRect(100, 30, 113, 24));
        textEdit_3 = new QTextEdit(groupBox);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(260, 60, 261, 101));
        textEdit_3->setMouseTracking(false);
        textEdit_3->setTabletTracking(false);
        textEdit_3->setAcceptDrops(true);
        textEdit_3->setAutoFillBackground(false);
        textEdit_3->setReadOnly(true);
        textEdit_3->setOverwriteMode(false);
        textEdit_3->setAcceptRichText(true);
        pushButtonConnexion_3 = new QPushButton(groupBox);
        pushButtonConnexion_3->setObjectName(QString::fromUtf8("pushButtonConnexion_3"));
        pushButtonConnexion_3->setGeometry(QRect(100, 120, 80, 24));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 180, 141, 16));
        lineEditMessageBanque = new QLineEdit(groupBox);
        lineEditMessageBanque->setObjectName(QString::fromUtf8("lineEditMessageBanque"));
        lineEditMessageBanque->setGeometry(QRect(20, 200, 501, 24));
        lineEditMessageBanque->setReadOnly(true);
        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(590, 230, 80, 24));
        DAB_MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DAB_MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 702, 21));
        DAB_MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DAB_MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DAB_MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DAB_MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DAB_MainWindow->setStatusBar(statusBar);

        retranslateUi(DAB_MainWindow);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), DAB_MainWindow, SLOT(close()));

        pushButtonNumeroCompte_3->setDefault(false);
        pushButtonEnvoi_3->setDefault(false);


        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        groupBox_2->setTitle(QApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        pushButtonNumeroCompte_3->setText(QApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        label_6->setText(QApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        radioButtonSolde_3->setText(QApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait_3->setText(QApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot_3->setText(QApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        pushButtonEnvoi_3->setText(QApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        groupBox->setTitle(QString());
        labelEtatConnexion_3->setText(QApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        labelAdresse_3->setText(QApplication::translate("DAB_MainWindow", "Adresse :", nullptr));
        labelPort_3->setText(QApplication::translate("DAB_MainWindow", "Port :", nullptr));
        pushButtonConnexion_3->setText(QApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        label->setText(QApplication::translate("DAB_MainWindow", "Message de la banque :", nullptr));
        lineEditMessageBanque->setText(QApplication::translate("DAB_MainWindow", "Veuillez  donnez votre num\303\251ro de compte", nullptr));
        pushButtonQuitter->setText(QApplication::translate("DAB_MainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
