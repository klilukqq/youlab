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

    QTextStream cout(stdout);
    if(network == "yes")
    {
        cout <<"1111111111";
        dbLoad.loader();
        //networkLoader.loader();
    }
    else
    {
        cout <<"2222222222222";
        dbLoad.loader();
    }

    dayExtend w(data);
    w.show();

    return a.exec();
}
