#include "option_success.h"
#include "ui_option_success.h"

option_success::option_success(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::option_success)
{
    ui->setupUi(this);
}

option_success::~option_success()
{
    delete ui;
}
