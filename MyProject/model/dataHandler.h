#ifndef DATAHANDLER_H
#define DATAHANDLER_H



#include "QString"
#include "QDate"

class dataHandler
{
    QDate date;
    int limit = 3;
    QString Get;
    QString systemTempOs;
    QString locate;

public:
    void setLimit(int lim);
    dataHandler();
    QString getSystem();
    QString getString_date();
    bool nextDate();
    bool prevDate();
    QDate getDate();
    void setDate(const QDate &value);
    void setLocate(QString);
    QString getLocate();
};




#endif // DATAHANDLER_H
