#include "gui/day/day_extend.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    data_handler* data = new data_handler();
    day_extend w(data);
    w.show();
    return a.exec();
}
