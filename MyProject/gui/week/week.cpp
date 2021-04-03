#include "week.h"

week::week(dataHandler* data, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::week)

{
    //delete parent;
    this->data = data;
    ui->setupUi(this);

    //this->setGeometry(parent->geometry());
    //ui->City->setText(data->getLocate());

    QFile file("conf.txt");
    if ((file.exists())&&(file.open(QIODevice::ReadOnly)))
    {
        data->setLocate(file.readAll());
        file.close();
    }

    ui->City->setText(data->getLocate());

    QDate date = QDate::currentDate().addDays(-1);

    ui->date_1->setText(date.toString(Qt::ISODate));
    date = date.addDays(1);
    ui->date_2->setText(date.toString(Qt::ISODate));
    date = date.addDays(1);
    ui->date_3->setText(date.toString(Qt::ISODate));
    date = date.addDays(1);
    ui->date_4->setText(date.toString(Qt::ISODate));
    date = date.addDays(1);
    ui->date_5->setText(date.toString(Qt::ISODate));
    date = date.addDays(1);
    ui->date_6->setText(date.toString(Qt::ISODate));
    date = date.addDays(1);
    ui->date_7->setText(date.toString(Qt::ISODate));


}

week::~week()
{
    delete ui;
}

void week::on_Setting_clicked()
{
    settings* setting = new settings();
    setting->setGeometry(this->geometry().x(),this->geometry().y(),this->geometry().width()\
                          ,this->geometry().height());
    setting->show();

}

void week::on_ChangeFormat_clicked()
{
    week::close();
    QFile file("conf.txt");
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(ui->City->text().toUtf8());
        file.close();
    }
    month* type = new month(data);
    type->setGeometry(this->geometry());
    type->show();
}

//как закрывать приложение
