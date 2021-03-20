#include "settings.h"
#include "ui_settings.h"
#include <QGeoRoute>


settings::settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
}

settings::settings(data_handler* data,QWidget *parent):
    QWidget(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);
    ui->text_locator->setText(data->getLocate());
    this->data = data;
}

settings::~settings()
{
    //parentWidget()->
    delete ui;
}

void settings::on_Setting_clicked()
{
    data->setLocate(ui->text_locator->text());
    //parent->
    settings::close();
}

data_handler* settings::getData(data_handler* data){
    return data;
}

void settings::on_gps_locator_clicked()
{
    QGeoRoute my_place;
    my_place.path();
    ui->text_locator->setText(my_place.routeId());
}
