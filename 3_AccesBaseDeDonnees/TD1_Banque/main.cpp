#include "widget.h"
#include <QApplication>
#include "interfaceaccesbdbanque.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    InterfaceAccesBDBanque object1("172.18.58.7", "snir", "snir");
    w.show();

    return a.exec();
}
