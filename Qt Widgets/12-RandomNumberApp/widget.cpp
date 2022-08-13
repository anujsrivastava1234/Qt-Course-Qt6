#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  resize(300,300);

  lcd=new QLCDNumber();
  lcd->setStyleSheet("background-color:yellow");

  btn=new QPushButton();
  btn->setText("CLick");
  btn->setFont(QFont("Times",15));
  btn->setStyleSheet("background-color:red");
  connect(btn,SIGNAL(clicked()),this,SLOT(randnumber()));

  QVBoxLayout *vBox=new QVBoxLayout(this);
  vBox->addWidget(lcd);
  vBox->addWidget(btn);
}

Widget::~Widget()
{
}

void Widget::randnumber()
{
  int randomnumber=rand();
  lcd->display(randomnumber);

}

