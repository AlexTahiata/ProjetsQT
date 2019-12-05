#include "serveurwidget.h"
#include "ui_serveurwidget.h"

ServeurWidget::ServeurWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServeurWidget)
{
    ui->setupUi(this);

    socketEcouteServeur = new QTcpServer (this);
    socketEcouteServeur->setMaxPendingConnections(1);
}

ServeurWidget::~ServeurWidget()
{
    delete ui;
}

void ServeurWidget::onQTcpServer_newConnection()
{
    socketDialogueClient = socketEcouteServeur->nextPendingConnection();
    connect(socketDialogueClient, &QTcpSocket::readyRead,this,&ServeurWidget::onQTcpSocket_readyRead);

    QHostAddress adresseClient = socketDialogueClient->peerAddress();
    ui->textEdit->append(adresseClient.toString());

    process = new QProcess(this);
    connect(process, &QProcess::readyReadStandardOutput, this, &ServeurWidget::onQProcess_readyReadStandardOutpout);
}

void ServeurWidget::onQProcess_readyReadStandardOutpout()
{
    QString reponse = process->readAllStandardOutput();
    if(!reponse.isEmpty())
    {
        QString message = "Réponse envoyée à " + socketDialogueClient->peerAddress().toString() + " : " + reponse;
        ui->textEdit->append(message);
        socketDialogueClient->write(reponse.toLatin1());
    }
}

void ServeurWidget::on_pushButtonLancementServeur_clicked()
{
    if (!socketEcouteServeur->listen(QHostAddress::Any,(static_cast<quint16>(ui->spinBoxPort->value()))))
    {
        QString message = "Impossible de démarrer le serveur " + socketEcouteServeur->errorString();
        ui->textEdit->append(message);
        close();
    }
    else {
        ui->textEdit->append("N° du port : " + QString::number(socketEcouteServeur->serverPort()));
        connect(socketEcouteServeur,&QTcpServer::newConnection, this, &ServeurWidget::onQTcpServer_newConnection);

        ui->pushButtonLancementServeur->setEnabled(false);
        ui->spinBoxPort->setEnabled(false);
    }
}
