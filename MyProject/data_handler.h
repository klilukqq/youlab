#ifndef DATA_HANDLER_H
#define DATA_HANDLER_H



#include "QString"
#include "QDate"

class data_handler
{
    QDate date;
    int limit = 3;

    QString locate;

public:
    data_handler();
    QString getString_date();
    bool nextDate();
    bool prevDate();
    QDate getDate();
    void setDate(const QDate &value);
    void setLocate(QString);
    QString getLocate();
};




#endif // DATA_HANDLER_H