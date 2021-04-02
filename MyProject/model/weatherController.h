#ifndef WEATHERCONTROLLER_H
#define WEATHERCONTROLLER_H

#include <QObject>



#include "QEventLoop"

#include <QNetworkReply>
#include <QNetworkAccessManager>

class weatherController : public QObject
{
public:
    ~weatherController();
    weatherController();
    QString checkNetwork();
};

#endif // WEATHERCONTROLLER_H
