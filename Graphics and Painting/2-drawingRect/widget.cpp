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
  //drawing rect
  QPainter mypainter(this);
  mypainter.setBrush(Qt::BrushStyle::CrossPattern);
  mypainter.drawRect(QRect(40,120,200,200));

  //set style for ellicpse
  QPen ellipsepen;
  ellipsepen.setColor(Qt::GlobalColor::cyan);
  ellipsepen.setStyle(Qt::DashDotLine);
  //drawing ellicpse
  mypainter.setPen(ellipsepen);
  mypainter.drawEllipse(QPoint(300,200),80,50);

}

