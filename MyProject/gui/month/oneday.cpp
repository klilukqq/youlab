#include "oneday.h"
#include "ui_oneday.h"

OneDay::OneDay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OneDay)
{
    ui->setupUi(this);
}

OneDay::~OneDay()
{
    delete ui;
}
