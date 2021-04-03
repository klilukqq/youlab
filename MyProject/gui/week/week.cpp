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

    QFile file;
    if(data->getSystem() == "Windows"){
        file.setFileName("..\\conf.txt");
    }
    else if(data->getSystem() == "Linux"){
        file.setFileName("../conf.txt");;
    }
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
    settings* setting = new settings(data);
    setting->setGeometry(this->geometry().x(),this->geometry().y(),this->geometry().width()\
                          ,this->geometry().height());
    QObject::connect(setting,&settings::signalFromButton,this,&week::update);
    setting->show();

}

void week::on_ChangeFormat_clicked()
{
    week::close();
    month* type = new month(data);
    type->setGeometry(this->geometry());
    type->show();
}

void week::update()
{
    QFile file;
    if(data->getSystem() == "Windows"){
        file.setFileName("..\\conf.txt");
    }
    else if(data->getSystem() == "Linux"){
        file.setFileName("../conf.txt");;
    }
    if (file.open(QIODevice::WriteOnly))
    {
        file.write(data->getLocate().toUtf8());
        file.close();
    }
    ui->City->setText(data->getLocate());
}

//как закрывать приложение
