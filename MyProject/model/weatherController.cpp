#include "weatherController.h"
#include "../model/dbLoader.h"
#include "../model/remoteServiceLoader.h"


weatherController::~weatherController()
{

}

weatherController::weatherController()
{

}

void weatherController::checkNetwork(dataHandler* data)
{
    QNetworkAccessManager nam;
    QNetworkRequest req(QUrl("http://www.google.com"));
    QNetworkReply* reply = nam.get(req);
    QEventLoop loop;
    QTextStream cout(stdout);
    dbLoader dbLoad(data);
    remoteServiceLoader networkLoader(data);
    connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    if(reply->bytesAvailable())
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


}
