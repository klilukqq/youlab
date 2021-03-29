#include "oneDay.h"
#include "ui_oneDay.h"

oneDay::oneDay(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oneDay)
{
    ui->setupUi(this);
}

oneDay::~oneDay()
{
    delete ui;
}
