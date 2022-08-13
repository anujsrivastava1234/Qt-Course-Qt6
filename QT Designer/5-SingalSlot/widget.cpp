#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  connect(ui->dial,SIGNAL(valueChanged(int)),ui->lcdNumber,SLOT(display(int)));
  connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->lcdNumber,SLOT(display(int)));
}

Widget::~Widget()
{
  delete ui;
}

