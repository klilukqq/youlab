#include "settings.h"
#include "ui_settings.h"


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
    ui->Setting->destroyed();
    delete ui;
}

void settings::on_Setting_clicked()
{
    data->setLocate(ui->text_locator->text());
    settings::close();
}

data_handler* settings::getData(data_handler* data){
    return data;
}
