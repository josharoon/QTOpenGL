#include "uiinput.h"
#include "ui_uiinput.h"
#include <iostream>


uiInput::uiInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uiInput)
{
    ui->setupUi(this);
}

uiInput::~uiInput()
{
    delete ui;
}




