#include "widget.h"

Widget::Widget(QWidget *parent): QWidget(parent)
{
  setWindowTitle("QPushButton");
  resize(500,300);
  setWindowIcon(QIcon(":/images/qt.png"));

  QPushButton *btn=new QPushButton(this);
  btn->setText("Click");
  btn->setGeometry(100,100,130,130);
  btn->setFont(QFont("Times",15));
  btn->setIcon(QIcon(":/images/qt.png"));
  btn->setIconSize(QSize(36,36));

  QMenu *menu=new QMenu();
  menu->setFont(QFont("Times",14));
  menu->setStyleSheet("background-color:yellow");
  menu->addAction("Copy");
  menu->addAction("Paste");
  menu->addAction("Cut");

  btn->setMenu(menu);
}

Widget::~Widget()
{
}

