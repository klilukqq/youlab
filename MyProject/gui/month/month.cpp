#include "month.h"
#include <QTextStream>
#include <QDir>
#include <QDate>

month::month(dataHandler* data,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::month)
{

    this->data = data;
    ui->setupUi(this);

    if(data->getUpperWindow())
        this->setWindowFlags(Qt::WindowStaysOnTopHint);

    ui->City->setText(data->getLocate());

    QDate tempDate;
    //tempDate.currentDate().daysInMonth();
    //out << tempDate.currentDate().daysInMonth();
    int numberDays = tempDate.currentDate().daysInMonth();

    for(int i = 1; i <= numberDays;i++){
    tempDate.setDate(tempDate.currentDate().year(),tempDate.currentDate().month(),i);
    //out << tempDate.toString(Qt::ISODate);
    day[i-1].setDate(tempDate.toString(Qt::ISODate));

    //Добавить заполнение



    ui->monthLayout->addWidget(&day[i-1],(i-1)/6,(i-1)%6);
    }
    //delete[] day;
}

month::~month()
{
    delete data;
    delete[] day;
    delete ui;
}

void month::on_Setting_clicked()
{
    settings* setting = new settings(data);
    setting->setGeometry(this->geometry().x(),this->geometry().y(),this->geometry().width()\
                          ,this->geometry().height());
    QObject::connect(setting,&settings::signalFromButton,this,&month::update);
    setting->show();
    setting->activateWindow();
}

void month::on_ChangeFormat_clicked()
{
    month::close();
    dayExtend* type = new dayExtend(data);
    type->setGeometry(this->geometry());
    type->show();

}

void month::update()
{
    this->setWindowFlags(Qt::WindowStaysOnTopHint);
    if(data->getUpperWindow() == 0)
        this->setWindowFlags(this->windowFlags() & (~Qt::WindowStaysOnTopHint));
    this->show();
    ui->City->setText(data->getLocate());
}
