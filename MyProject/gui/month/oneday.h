#ifndef ONEDAY_H
#define ONEDAY_H

#include <QWidget>

namespace Ui {
class oneDay;
}

class oneDay : public QWidget
{
    Q_OBJECT

public:
    explicit oneDay(QWidget *parent = nullptr);
    ~oneDay();

private:
    Ui::oneDay *ui;
};

#endif // ONEDAY_H
