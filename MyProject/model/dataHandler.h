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
    //можно подобрать
public:
    int sumDate;

    QDate Date[45];

    int night[45];
    int morning[45];
    int day[45];
    int evening[45];

    QString nightWeather[45];
    QString morningWeather[45];
    QString dayWeather[45];
    QString eveningWeather[45];

    void setData(int i, QDate, int, int, int, int, QString, QString, QString, QString);
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
