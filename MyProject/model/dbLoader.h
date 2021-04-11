#ifndef DBLOADER_H
#define DBLOADER_H
#include "ILoader.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include "model/dataHandler.h"
#include "QString"

class dbLoader : public ILoader
{
    dataHandler* data;
    QSqlDatabase db;
public:
    ~dbLoader();
    dbLoader(dataHandler* data);
    void openDB();
    void closeDB();
    void loader() override;
    void clearOldInfo();
};

#endif // DBLOADER_H
