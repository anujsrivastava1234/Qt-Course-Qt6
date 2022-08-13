#include "widget.h"
#include "./ui_widget.h"

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

void Widget::paintEvent(QPaintEvent *event)
{
//  QPainterPath rectPath;
//  rectPath.addRect(QRect(150,20,200,200));

//  QPainter pathPainter(this);
//  pathPainter.setPen(QPen(Qt::GlobalColor::red,1,Qt::DashDotDotLine,Qt::FlatCap,Qt::MiterJoin));
//  pathPainter.setBrush(Qt::GlobalColor::yellow);
//  pathPainter.drawPath(rectPath);

  //for Ellicpse
  QPainterPath ellipsePath;
  ellipsePath.addEllipse(QPoint(200,120),50,20);

  QPainter ellipsePainter(this);
  ellipsePainter.setPen(QPen(QColor(79,106,25),5,Qt::SolidLine,Qt::FlatCap,Qt::MiterJoin));
  ellipsePainter.setBackground(QColor(122,163,30));
  ellipsePainter.drawPath(ellipsePath);
}

