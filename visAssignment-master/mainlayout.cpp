#include "mainlayout.h"
#include "ui_mainlayout.h"

sliderLayout::sliderLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sliderLayout)
{
    ui->setupUi(this);
}

sliderLayout::~sliderLayout()
{
    delete ui;
}
