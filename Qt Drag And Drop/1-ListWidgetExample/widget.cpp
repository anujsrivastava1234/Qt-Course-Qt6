#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  ui->listWidget->setAcceptDrops(true);
  ui->listWidget->setDragEnabled(true);
  ui->listWidget_2->setAcceptDrops(true);
  ui->listWidget_2->setDragEnabled(true);
}

Widget::~Widget()
{
  delete ui;
}

