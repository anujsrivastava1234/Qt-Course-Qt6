#include "widget.h"
//#include <QStatusBar>
Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  setWindowTitle("QHBoxLayout");
  resize(500,300);
  setWindowIcon(QIcon(":/images/qt.png"));
//  statusBar()->showMessage("Hello World");

  QPushButton *btn1=new QPushButton();
  btn1->setText("Click One");
  btn1->setIcon(QIcon(":/images/qt.png"));

  QPushButton *btn2=new QPushButton();
  btn2->setText("Click Two");
  btn2->setIcon(QIcon(":/images/qt.png"));

  QPushButton *btn3=new QPushButton();
  btn3->setText("Click Three");
  btn3->setIcon(QIcon(":/images/qt.png"));

  QPushButton *btn4=new QPushButton();
  btn4->setText("Click Four");
  btn4->setIcon(QIcon(":/images/qt.png"));
  QHBoxLayout *hBox=new QHBoxLayout(this);
  hBox->addWidget(btn1);
  hBox->addWidget(btn2);
  hBox->addWidget(btn3);
  hBox->addWidget(btn4);
}

Widget::~Widget()
{
}

