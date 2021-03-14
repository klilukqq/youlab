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

void data_handler::nextDate(){
    if(limit < 14){
        date = date.addDays(1);
        limit += 1;
    }
}


void data_handler::prevDate(){
    if(limit > 0){
    date = date.addDays(-1);
    limit -= 1;
    }
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

