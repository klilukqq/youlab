#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class day_extend : public QWidget
{
    Q_OBJECT

public:
    day_extend(QWidget *parent = nullptr);
    ~day_extend();

private slots:
    void on_Setting_clicked();

    void on_ChangeFormat_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
