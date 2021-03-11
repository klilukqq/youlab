#ifndef DAY_SHORT_H
#define DAY_SHORT_H

#include <QWidget>

namespace Ui {
class day_short;
}

class day_short : public QWidget
{
    Q_OBJECT

public:
    explicit day_short(QWidget *parent = nullptr);
    ~day_short();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

private:
    Ui::day_short *ui;
};

#endif // DAY_SHORT_H
