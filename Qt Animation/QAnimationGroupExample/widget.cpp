#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  QPropertyAnimation *anim1=new QPropertyAnimation(ui->pushButton,"geometry");
  anim1->setDuration(3000);
  anim1->setStartValue(ui->pushButton->geometry());
  anim1->setEndValue(QRect(50,200,100,50));

  QPropertyAnimation *anim2=new QPropertyAnimation(ui->pushButton_2,"geometry");
  anim2->setDuration(3000);
  anim2->setStartValue(ui->pushButton_2->geometry());
  anim2->setEndValue(QRect(150,200,100,50));

  QPropertyAnimation *anim3=new QPropertyAnimation(ui->pushButton_3,"geometry");
  anim3->setDuration(3000);
  anim3->setStartValue(ui->pushButton_3->geometry());
  anim3->setEndValue(QRect(250,200,100,50));

  QPropertyAnimation *anim4=new QPropertyAnimation(ui->pushButton_4,"geometry");
  anim4->setDuration(3000);
  anim4->setStartValue(ui->pushButton_4->geometry());
  anim4->setEndValue(QRect(350,200,100,50));

  //creating easing curve
  QEasingCurve curve;
  curve.setType(QEasingCurve::OutCurve);
  curve.setAmplitude(1.0);
  curve.setOvershoot(1.70);
  curve.setPeriod(0.30);

  anim1->setEasingCurve(curve);
  anim2->setEasingCurve(curve);
  anim3->setEasingCurve(curve);
  anim4->setEasingCurve(curve);

  QParallelAnimationGroup *group=new QParallelAnimationGroup();
  group->addAnimation(anim1);
  group->addAnimation(anim2);
  group->addAnimation(anim3);
  group->addAnimation(anim4);

  group->start();

}

Widget::~Widget()
{
  delete ui;
}

