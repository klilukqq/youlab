#ifndef ONEDAY_H
#define ONEDAY_H

#include <QWidget>
#include <QDate>

namespace Ui {
class oneDay;
}

class oneDay : public QWidget
{
    Q_OBJECT

public:
    explicit oneDay(QWidget *parent = nullptr);
    ~oneDay();
    void setDate(QDate date);
    Ui::oneDay *ui;
};

#endif // ONEDAY_H
