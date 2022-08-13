#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent *event)
{
  QImage image;
  image.load(":/images/ww.png");
  QPainter imagePainter(this);
  imagePainter.drawImage(QPoint(200,150),image);
}

