#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  setWindowTitle("QVBoxLayout");
  resize(500,300);

  QPushButton *btn1=new QPushButton();
  btn1->setText("Click One");

  QPushButton *btn2=new QPushButton();
  btn2->setText("Click One");

  QPushButton *btn3=new QPushButton();
  btn3->setText("Click One");

  QPushButton *btn4=new QPushButton();
  btn4->setText("Click One");

  QVBoxLayout *vBox=new QVBoxLayout(this);
  vBox->addWidget(btn1);
  vBox->addWidget(btn2);
  vBox->addWidget(btn3);
  vBox->addWidget(btn4);
}

Widget::~Widget()
{
}

