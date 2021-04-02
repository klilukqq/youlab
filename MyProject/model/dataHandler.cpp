#include "dataHandler.h"

QDate dataHandler::getDate()
{
    return date;
}

void dataHandler::setDate(const QDate &value)
{
    date = value;
}



dataHandler::dataHandler(){

#ifdef Q_OS_WIN32
    systemTempOs = "Windows";
#endif
#ifdef Q_OS_LINUX
    systemTempOs = "Linux";
#endif
    date = QDate::currentDate();
}

bool dataHandler::nextDate(){
    if(limit <= 10){
        date = date.addDays(1);
        limit += 1;
        if(limit == 10)
            return false;
        else
            return true;
    }
    return false;
}

QString dataHandler::getSystem(){
    return systemTempOs;
}



void dataHandler::setData(int i,QDate dbDate,int dbNight,int dbMorning,int dbDay,int dbEvening,QString dbNightWeather,QString dbMorningWeather,QString dbDayWeather,QString dbEveningWeather)
{
    Date[i] = dbDate;
    night[i] = dbNight;
    morning[i] = dbMorning;
    day[i] = dbDay;
    evening[i] = dbEvening;
    nightWeather[i] = dbNightWeather;
    morningWeather[i] = dbMorningWeather;
    dayWeather[i] = dbDayWeather;
    eveningWeather[i] = dbEveningWeather;
}

void dataHandler::setLimit(int lim){
    this->limit = lim;
}

bool dataHandler::prevDate(){
    if(limit > 0){
        date = date.addDays(-1);
        limit -= 1;
        if(limit == 0)
            return false;
        else
            return true;
    }
    return false;
}

QString dataHandler::getString_date()
{
    return date.toString(Qt::ISODate);
}

void dataHandler::setLocate(QString locate){
    this->locate = locate;
}

QString dataHandler::getLocate(){
    return this->locate;
}

