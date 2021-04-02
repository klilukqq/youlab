#include "weatherController.h"

weatherController::~weatherController()
{

}

weatherController::weatherController()
{

}

QString weatherController::checkNetwork()
{
    QNetworkAccessManager nam;
    QNetworkRequest req(QUrl("http://www.google.com"));
    QNetworkReply* reply = nam.get(req);
    QEventLoop loop;
    connect(reply, SIGNAL(finished()), &loop, SLOT(quit()));
    loop.exec();
    QString type;
    if(reply->bytesAvailable())
    {
        type = "yes";
        return type;
    }
    else
    {
        type = "no";
        return type;
    }
}
