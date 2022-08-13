#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QListWidget *listWidget=new QListWidget();
  listWidget->setFont(QFont("Times",14));
  listWidget->setStyleSheet("background-color:yellow");
  listWidget->insertItem(0,"C++");
  listWidget->insertItem(1,"Python");
  listWidget->insertItem(2,"Java");
  listWidget->insertItem(3,"C#");

  QVBoxLayout *vBox=new QVBoxLayout(this);
  vBox->addWidget(listWidget);
}

Widget::~Widget()
{
}

