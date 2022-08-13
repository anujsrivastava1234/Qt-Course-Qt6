#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QTimer *timer=new QTimer(this);
  timer->start(1000);
  connect(timer,SIGNAL(timeout()),this,SLOT(update()));
}

Widget::~Widget()
{
}

void Widget::paintEvent(QPaintEvent *event)
{
  static const QPoint hourhand[3]={
    QPoint(4,4),
    QPoint(-4,4),
    QPoint(0,-40)
  };

  static const QPoint minutehand[3]={
    QPoint(4,4),
    QPoint(-4,4),
    QPoint(0,-70)
  };

  static const QPoint secondhand[3]={
    QPoint(2,2),
    QPoint(-2,2),
    QPoint(0,-90)
  };

  //For boundary design
  int side=qMin(width(),height());

  QPainter painter(this);
  painter.setRenderHint(QPainter::Antialiasing);
  painter.translate(width()/2,height()/2);
  painter.scale(side/250.0,side/250.0);

  for(int i=0;i<60;i++){
      if((i%5)!=0)
        painter.drawLine(92,0,96,0);
      else
        painter.drawLine(86,0,96,0);
      painter.rotate(6.0);
}
      QTime time=QTime::currentTime();


      //draw hour,,second hand
      painter.save();
      painter.rotate((time.hour()*360)/12);
      painter.setPen(Qt::NoPen);
      painter.setBrush(Qt::black);
      painter.drawConvexPolygon(hourhand,3);
      painter.restore();

      //Draw Minute Hand
      painter.save();
      painter.rotate((time.minute()*360)/60);
      painter.setPen(Qt::NoPen);
      painter.setBrush(Qt::black);
      painter.drawConvexPolygon(minutehand,3);
      painter.restore();

      //Draw Second Hand
      painter.save();
      painter.rotate((time.second()*360)/60);
      painter.setPen(Qt::NoPen);
      painter.setBrush(Qt::black);
      painter.drawConvexPolygon(secondhand,3);
      painter.restore();

}

