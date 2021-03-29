#include "gui/day/dayExtend.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dataHandler* data = new dataHandler();
    dayExtend w(data);
    w.show();
    return a.exec();
}
