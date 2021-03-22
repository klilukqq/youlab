#ifndef ONEDAY_H
#define ONEDAY_H

#include <QWidget>

namespace Ui {
class OneDay;
}

class OneDay : public QWidget
{
    Q_OBJECT

public:
    explicit OneDay(QWidget *parent = 0);
    ~OneDay();

private:
    Ui::OneDay *ui;
};

#endif // ONEDAY_H
