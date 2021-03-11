#ifndef WEEK_H
#define WEEK_H

#include <QWidget>

namespace Ui {
class week;
}

class week : public QWidget
{
    Q_OBJECT

public:
    explicit week(QWidget *parent = nullptr);
    ~week();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

private:
    Ui::week *ui;
};

#endif // WEEK_H
