#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QPushButton *btn1=new QPushButton();
  btn1->setText("Click One");
  QPushButton *btn2=new QPushButton();
  btn2->setText("Click One");
  QPushButton *btn3=new QPushButton();
  btn3->setText("Click One");
  QPushButton *btn4=new QPushButton();
  btn4->setText("Click One");
  QGridLayout *grid=new QGridLayout(this);
  grid->addWidget(btn1,0,0);
  grid->addWidget(btn2,0,1);
  grid->addWidget(btn3,1,0);
  grid->addWidget(btn4,1,1);
}

Widget::~Widget()
{
}

