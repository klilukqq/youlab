#include "month.h"

month::month(dataHandler* data,QWidget *parent) :
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
    oneDay* day = new oneDay[1];
    day[0].setGeometry(5,5,25,10);
    day[0].setDate(date.daysInMonth());
    ui->monthLayout->addWidget(&day[0],1,1,1,1);
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

    dayExtend* type = new dayExtend(data);
    type->show();

}
