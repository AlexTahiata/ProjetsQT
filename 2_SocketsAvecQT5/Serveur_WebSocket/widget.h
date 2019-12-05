#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QWebSocketServer>
#include <QWebSocket>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void onQWebSocketServer_newConnection();
    void onQWebSocket_textMessageReceived(QString);
    void onQtimer_majDate();
private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    QWebSocketServer *sock;
    QWebSocket *client;
    QTimer *majDate;
};

#endif // WIDGET_H
