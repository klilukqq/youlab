#ifndef LOCALSTORAGE_H
#define LOCALSTORAGE_H

#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include "model/dataHandler.h"
#include "QString"

class localStorage
{
    dataHandler* data;
    QSqlDatabase db;
public:
    localStorage(dataHandler*);
    void upload();
};

#endif // LOCALSTORAGE_H
