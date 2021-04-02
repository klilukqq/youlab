#include "month.h"
#include <QTextStream>

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
    //QTextStream out(stdout);
// day[0].setGeometry(5,5,25,10);
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
    delete[] day;
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
