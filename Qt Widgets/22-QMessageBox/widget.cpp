#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QHBoxLayout *hBox=new QHBoxLayout(this);

  QPushButton *btn=new QPushButton();
  btn->setText("Warning");
  connect(btn,SIGNAL(clicked()),this,SLOT(warnMsg()));

  QPushButton *btn1=new QPushButton();
  btn1->setText("Warning");
  connect(btn1,SIGNAL(clicked()),this,SLOT(getinfo()));

  QPushButton *btn2=new QPushButton();
  btn2->setText("Warning");
  connect(btn2,SIGNAL(clicked()),this,SLOT(setabout()));

  hBox->addWidget(btn);
  hBox->addWidget(btn1);
  hBox->addWidget(btn2);
}

Widget::~Widget()
{
}

void Widget::warnMsg()
{
  QMessageBox::warning(this,"Warning","This is a Warning");
}

void Widget::getinfo()
{
  QMessageBox::information(this,"informaTION","This is a Information");
}

void Widget::setabout()
{
  QMessageBox::about(this,"About","This is a About");
}

