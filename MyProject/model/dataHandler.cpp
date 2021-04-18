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

int dataHandler::getSumDate() const
{
    return sumDate;
}

void dataHandler::setSumDate(int value)
{
    sumDate = value;
}

QString dataHandler::getnightWeather(int i)
{
    return nightWeather[i];
}

QString dataHandler::getmorningWeather(int i)
{
    return morningWeather[i];
}

QString dataHandler::getdayWeather(int i)
{
    return dayWeather[i];
}

QString dataHandler::geteveningWeather(int i)
{
    return eveningWeather[i];
}

void dataHandler::setnightWeather(int i, QString value)
{
    nightWeather[i] = value;
}

void dataHandler::setmorningWeather(int i, QString value)
{
    morningWeather[i] = value;
}

void dataHandler::setdayWeather(int i, QString value)
{
    dayWeather[i] = value;
}

void dataHandler::seteveningWeather(int i, QString value)
{
    eveningWeather[i] = value;
}

int dataHandler::getnight(int i)
{
    return night[i];
}

int dataHandler::getmorning(int i)
{
    return morning[i];
}

int dataHandler::getday(int i)
{
    return day[i];
}

int dataHandler::getevening(int i)
{
    return evening[i];
}

void dataHandler::setnight(int i, int value)
{
    night[i] = value;
}

void dataHandler::setmorning(int i, int value)
{
    night[i] = value;
}

void dataHandler::setevening(int i, int value)
{
    night[i] = value;
}

void dataHandler::setday(int i, int value)
{
    night[i] = value;
}

void dataHandler::setDateMass(QDate date, int i)
{
    Date[i] = date;
}

QDate dataHandler::getDateMass(int i)
{
    return Date[i];
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

QString dataHandler::choosePic(QString picName)
{
    pictureChooser chooser;
    return chooser.GetRightName(picName);
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

