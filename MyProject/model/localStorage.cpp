#include "localStorage.h"

localStorage::localStorage(dataHandler* data)
{
    this->data = data;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(":/sysFiles/MyDB.db");
    db.open();
}

void localStorage::upload()
{
    QSqlQuery query;
    //написать запрос всего
    QString Squery;
    Squery = "DELETE FROM Weather;";
   query.exec(Squery);
    for(int i = 0;i <data->getSumDate();i++){
        Squery = "INSERT INTO Weather (Date, morningTemp, dayTemp, eveningTemp, nightTemp, morningString, dayString, eveningString, nightString)"
        "VALUES (" + data->getDateMass(i).toString() + ", " + data->getmorning(i) + ", " + data->getday(i) + ", " + data->getevening(i) + ", "\
        + data->getnight(i) + ", " + data->getmorningWeather(i) + ", " + data->getdayWeather(i) + ", " + data->geteveningWeather(i) + ", " + data->getnightWeather(i) + ");";
       query.exec(Squery);
    }
}
