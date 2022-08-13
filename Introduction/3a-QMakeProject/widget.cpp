#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  setWindowTitle("QMake Icon");
//  resize(500,300);
  setFixedWidth(500);
  setFixedHeight(300);
  setStyleSheet("background-color:orange");
//  setWindowOpacity(0.8);
  setWindowIcon(QIcon(":/images/qt.png"));
}

Widget::~Widget()
{
}

