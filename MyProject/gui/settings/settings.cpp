#include "settings.h"
#include "ui_settings.h"

//#include <QGeoRoute>


settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);

}

settings::settings(dataHandler* data,QWidget *parent):
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    this->setWindowTitle("Настройки");
    ui->text_locator->setText(data->getLocate());
    this->data = data;
    //connect(ui->SettingApply,SIGNAL(clicked()),this,);
}

settings::~settings()
{
    //parentWidget()->
    delete ui;
}


dataHandler* settings::getData(dataHandler* data){
    return data;
}

void settings::on_gps_locator_clicked()
{
    //QGeoRoute my_place;
    //my_place.path();
    //ui->text_locator->setText(my_place.routeId());
}



void settings::on_SettingOK_clicked()
{
    connect(this,SIGNAL(this.on_SettingOK_clicked()),parent(),SLOT(parent::on_update_clicked()));
    data->setLocate(ui->text_locator->text());
    settings::close();
}

void signalFromButton(int){

}

void settings::on_SettingApply_clicked()
{
    PrevLocation = data->getLocate();
    data->setLocate(ui->text_locator->text());
}

void settings::on_SettingCancel_clicked()
{
    ui->text_locator->setText(PrevLocation);
    data->setLocate(PrevLocation);
}
