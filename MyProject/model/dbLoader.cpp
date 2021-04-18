#include "dbLoader.h"
#include "QVariant"
#include <QSqlError>
#include <QTextStream>
#include <QDir>
#include <QSettings>

dbLoader::~dbLoader()
{

}

dbLoader::dbLoader(dataHandler* data)
{
    this->data = data;
}

void dbLoader::openDB()
{
    //
    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("./../MyDB.db");

    QTextStream cout(stdout);
    db.open();
    //cout <<db.isOpen();
    //cout <<db.lastError().text() ;

}

void dbLoader::closeDB()
{
    db.close();
}

void dbLoader::loader()
{
    QSqlQuery* query = new QSqlQuery(db);
    //написать запрос всего
    int i = 0;
    query->exec("SELECT Date, dayTemp, dayString FROM Weather;");
    while(query->next()){
        //QDate Data = query.value(0).to;
        data->setData(i,query->value(0).toDate(),query->value(1).toInt(),query->value(2).toString());
        i++;
    }
    data->setSumDate(i);
    i = 0;
    query->exec("SELECT Date, morningTemp, eveningTemp, nightTemp, morningString, eveningString, nightString FROM WeatherDay;");
    while(query->next()){
        //QDate Data = query.value(0).to;
        data->setDataDay(i,query->value(0).toDate(),query->value(1).toInt(),query->value(2).toInt(),\
        query->value(3).toInt(),query->value(4).toString(),\
        query->value(5).toString(),query->value(6).toString());
        i++;
    }
}

void dbLoader::clearOldInfo()
{
    QSqlQuery query;

    query.exec("DELETE FROM Weather;");
    query.exec("DELETE FROM WeatherDay;");
}




