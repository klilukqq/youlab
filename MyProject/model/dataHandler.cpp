#include "dataHandler.h"

#include <QTextStream>

QDate dataHandler::getDate()
{
    return date;
}

void dataHandler::setDate(const QDate &value)
{
    date = value;
}



dataHandler::dataHandler(){

    date = QDate::currentDate();

    if(this->getLocate() == NULL){
        QFile file;
        file.setFileName("./../settings.txt");
        if ((file.open(QIODevice::ReadOnly)))
        {
            this->setLocate(file.readLine());
            this->setTempStartFormat(file.read(1).toInt());
            this->setUpperWindow(file.read(1).toInt());
            file.close();
        }
    }
}

dataHandler::~dataHandler()
{
    QTextStream cout(stdout);
    cout <<"23";
    QFile file;
    file.setFileName("./../settings.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(this->getLocate().toUtf8());
        QTextStream writeStream(&file);
        writeStream << this->getTempStartFormat();
        writeStream << this->getUpperWindow();

        file.close();
    }
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




int dataHandler::getTempStartFormat() const
{
    return tempStartFormat;
}

void dataHandler::setTempStartFormat(int value)
{
    tempStartFormat = value;
}

int dataHandler::getUpperWindow() const
{
    return upperWindow;
}

void dataHandler::setUpperWindow(int value)
{
    upperWindow = value;
}

void dataHandler::setData(int i,QDate dbDate,int dbDay,QString dbDayWeather)
{
    Date[i] = dbDate;
    day[i] = dbDay;
    dayWeather[i] = dbDayWeather;
}

void dataHandler::setDataDay(int i,QDate dbDate,int dbNight,int dbMorning,int dbEvening,QString dbNightWeather,QString dbMorningWeather,QString dbEveningWeather)
{
    Date[i] = dbDate;
    night[i] = dbNight;
    morning[i] = dbMorning;
    evening[i] = dbEvening;
    nightWeather[i] = dbNightWeather;
    morningWeather[i] = dbMorningWeather;
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

