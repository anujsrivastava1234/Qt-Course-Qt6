#include "widget.h"
#include "./ui_widget.h"
#include <QPainterPath>
Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
}

Widget::~Widget()
{
  delete ui;
}

void Widget::paintevent(QPaintEvent *event)
{
//  QPainterPath rectPath;
//  rectPath.addRect(150,20,200,200);
//  QPainter pathPainter(this);
//  pathPainter.setPen(QPen(Qt::GlobalColor::red,1,Qt::DashDotDotLine,Qt::FlatCap,Qt::MiterJoin));
//  pathPainter.setBrush(Qt::yellow);
//  pathPainter.drawPath(rectPath);

  QPainter myPainter(this);
  myPainter.drawText(QPoint(100,100),"Qt6 Course");
  myPainter.setFont(QFont("Times",15));

}

