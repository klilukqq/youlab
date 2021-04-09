#include "dbLoader.h"
#include "QVariant"

dbLoader::~dbLoader()
{

}

dbLoader::dbLoader(dataHandler* data)
{
    this->data = data;
    db = QSqlDatabase::addDatabase("QSQLITE");

    db.setDatabaseName("MyDB.db");
    db.open();
}

void dbLoader::loader()
{
    QSqlQuery query;
    //написать запрос всего
    int i = 0;
    query.exec("SELECT Date, morningTemp, dayTemp, eveningTemp, nightTemp, morningString, dayString, eveningString, nightString FROM Weather;");

    while(query.next()){
        //QDate Data = query.value(0).to;
        data->setData(i,query.value(0).toDate(),query.value(1).toInt(),query.value(2).toInt(),\
        query.value(3).toInt(),query.value(4).toInt(),query.value(5).toString(),\
        query.value(6).toString(),query.value(7).toString(),query.value(8).toString());
        i++;
    }
    data->sumDate = i;
}

void dbLoader::clearOldInfo()
{
    QSqlQuery query;
    //написать запрос удаления старой инфы
    query.exec();
}




