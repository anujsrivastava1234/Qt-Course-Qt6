#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  QPropertyAnimation *anim=new QPropertyAnimation(ui->pushButton,"geometry");
  anim->setDuration(3000);
  anim->setStartValue(ui->pushButton->geometry());
  anim->setEndValue(QRect(200,200,100,30));

  QEasingCurve curve;
  curve.setType(QEasingCurve::OutBounce);
  anim->setEasingCurve(curve);
  anim->setLoopCount(3);

  anim->start();

}

Widget::~Widget()
{
  delete ui;
}

