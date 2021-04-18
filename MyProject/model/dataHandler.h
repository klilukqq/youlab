#ifndef DATAHANDLER_H
#define DATAHANDLER_H



#include "QString"
#include "QDate"
#include "QLabel"
#include "QFile"
#include "pictureChooser.h"

class dataHandler
{
    QDate date;
    int limit = 3;
    QString Get;
    QString locate = NULL;
    int tempStartFormat = 0;
    int upperWindow = 0;
    //можно подобрать
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

public:

    QString getnightWeather(int i);
    QString getmorningWeather(int i);
    QString getdayWeather(int i);
    QString geteveningWeather(int i);

    void setnightWeather(int i, QString value);
    void setmorningWeather(int i, QString value);
    void setdayWeather(int i, QString value);
    void seteveningWeather(int i, QString value);

    int getnight(int i);
    int getmorning(int i);
    int getday(int i);
    int getevening(int i);

    void setnight(int i, int value);
    void setmorning(int i, int value);
    void setday(int i, int value);
    void setevening(int i, int value);

    void setDateMass(QDate date,int i);
    QDate getDateMass(int i);
    void setData(int, QDate, int, QString);
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
    void setDataDay(int, QDate, int, int, int, QString, QString, QString);
    QString choosePic(QString);


    QString chooseSmallPic(QString picName);
    int getSumDate() const;
    void setSumDate(int value);
};




#endif // DATAHANDLER_H
