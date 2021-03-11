#ifndef MONTH_H
#define MONTH_H

#include <QWidget>

namespace Ui {
class month;
}

class month : public QWidget
{
    Q_OBJECT

public:
    explicit month(QWidget *parent = nullptr);
    ~month();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

private:
    Ui::month *ui;
};

#endif // MONTH_H
