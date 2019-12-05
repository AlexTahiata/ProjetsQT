#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    sock = new QWebSocketServer("NomServeur", QWebSocketServer::NonSecureMode, this);
    sock->setMaxPendingConnections(2);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::onQWebSocketServer_newConnection()
{
    //client = new QWebSocket("A", );
    client = sock->nextPendingConnection();
    qDebug() << "Prêt à recevoir des gens";
}

void Widget::on_pushButton_clicked()
{
    sock->listen(QHostAddress::Any, (static_cast<quint16>(8888)));
    connect(sock, &QWebSocketServer::newConnection, this, &Widget::onQWebSocketServer_newConnection);
}
