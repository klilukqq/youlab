#ifndef WEATHERCONTROLLER_H
#define WEATHERCONTROLLER_H

#include <QObject>
#include "model/dataHandler.h"


#include "QEventLoop"

#include <QNetworkReply>
#include <QNetworkAccessManager>

class weatherController : public QObject
{
public:
    ~weatherController();
    weatherController();
    void checkNetwork(dataHandler *data);
};

#endif // WEATHERCONTROLLER_H
