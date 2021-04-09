#ifndef DATAHANDLER_H
#define DATAHANDLER_H



#include "QString"
#include "QDate"
#include "QLabel"
#include "QFile"

class dataHandler
{
    QDate date;
    int limit = 3;
    QString Get;
    QString locate = NULL;
    int tempStartFormat = 0;
    int upperWindow = 0;
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
    ~dataHandler();
    QString getString_date();
    bool nextDate();
    bool prevDate();
    QDate getDate();
    void setDate(const QDate &value);
    void setLocate(QString);
    QString getLocate();
    int getTempStartFormat() const;
    void setTempStartFormat(int value);
    int getUpperWindow() const;
    void setUpperWindow(int value);
};




#endif // DATAHANDLER_H
