#include "gui/day/dayExtend.h"
#include "../model/weatherController.h"
#include "../model/dbLoader.h"
#include "../model/remoteServiceLoader.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dataHandler* data = new dataHandler();
    weatherController controller;

    dbLoader dbLoad(data);
    remoteServiceLoader networkLoader(data);

    QString network = controller.checkNetwork();

    if(network == "yes")
    {
        dbLoad.loader();
        //networkLoader.loader();
    }
    else if (network == "no")
    {
        dbLoad.loader();
    }

    dayExtend w(data);
    w.show();

    return a.exec();
}
