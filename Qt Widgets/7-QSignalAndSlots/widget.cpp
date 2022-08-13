#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QPushButton *btn=new QPushButton();
  btn->setText("Change Text");
  btn->setFont(QFont("Times",15));


  label =new QLabel();
  label->setText("Hello");

  connect(btn,SIGNAL(clicked()),this,SLOT(changeText()));

  QHBoxLayout *hBox=new QHBoxLayout(this);
  hBox->addWidget(btn);
  hBox->addWidget(label);
}

Widget::~Widget()
{
}

void Widget::changeText()
{
  label->setText("This text is changed");
  label->setFont(QFont("Times",15));
  label->setStyleSheet("color:red");

}

