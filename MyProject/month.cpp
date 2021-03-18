#include "month.h"
#include "ui_month.h"
#include "settings.h"
#include "day_extend.h"

month::month(data_handler* data,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::month)
{
    this->data = data;
    ui->setupUi(this);

    QFile file("conf.txt");
    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        data->setLocate(file.readAll());
        file.close();
    }

    ui->City->setText(data->getLocate());
}

month::~month()
{
    delete ui;
}

void month::on_Setting_clicked()
{
    settings* setting = new settings();
    setting->show();
}

void month::on_ChangeFormat_clicked()
{
    month::close();
    QFile file("conf.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(ui->City->text().toUtf8());
        file.close();
    }

    day_extend* type = new day_extend(data);
    type->show();

}
