#include "data_handler.h"



QDate data_handler::getDate()
{
    return date;
}

void data_handler::setDate(const QDate &value)
{
    date = value;
}

data_handler::data_handler(){

    date = QDate::currentDate();
}

bool data_handler::nextDate(){
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


bool data_handler::prevDate(){
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

QString data_handler::getString_date()
{
    return date.toString(Qt::ISODate);
}

void data_handler::setLocate(QString locate){
    this->locate = locate;
}

QString data_handler::getLocate(){
    return this->locate;
}

