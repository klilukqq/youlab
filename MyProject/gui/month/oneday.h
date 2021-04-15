#ifndef ONEDAY_H
#define ONEDAY_H

#include <QWidget>
#include <QDate>
#include "model/dataHandler.h"

namespace Ui {
class oneDay;
}

class oneDay : public QWidget
{
    Q_OBJECT

public:
    explicit oneDay(QWidget *parent = nullptr);
    ~oneDay();
    void setDate(QString date);
    void setTemp(int temp1, int temp2);
    Ui::oneDay *ui;
    void setPic(QString namePic);
};

#endif // ONEDAY_H
