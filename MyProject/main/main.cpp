#include "gui/day/dayExtend.h"
#include "gui/month/month.h"
#include "gui/week/week.h"
#include "../model/weatherController.h"
#include <QApplication>
#include "../model/copyfile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    copyFile copyManager;
    copyManager.copyFileDB();
    copyManager.copyFileSettings();

    dataHandler* data = new dataHandler();
    weatherController controller;

    controller.checkNetwork(data);

    dayExtend d(data);
    //week w(data);
    //month m(data);


//файлы только на считывание

    if(data->getTempStartFormat() == 0){
        d.show();
    }
    else if(data->getTempStartFormat() == 1){
        d.nextFormat();
    }
    else{
        d.prevFormat();
    }

    return a.exec();
}
