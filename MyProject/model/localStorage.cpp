#include "localStorage.h"

localStorage::localStorage(dataHandler* data)
{
    this->data = data;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../MyDB.db");
    db.open();
}

void localStorage::upload()
{
    QSqlQuery query;
    //написать запрос всего
    QString Squery;
    Squery = "DELETE FROM Weather;";
   query.exec(Squery);
    for(int i = 0;i <data->sumDate;i++){
        Squery = "INSERT INTO Weather (Date, morningTemp, dayTemp, eveningTemp, nightTemp, morningString, dayString, eveningString, nightString)"
        "VALUES (" + data->Date[i].toString() + ", " + data->morning[i] + ", " + data->day[i] + ", " + data->evening[i] + ", "\
        + data->night[i] + ", " + data->morningWeather[i] + ", " + data->dayWeather[i] + ", " + data->eveningWeather[i] + ", " + data->nightWeather[i] + ");";
       query.exec(Squery);
    }
}
