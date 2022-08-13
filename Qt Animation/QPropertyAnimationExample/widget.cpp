#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);

  //  QPropertyAnimation *anim=new
  //  QPropertyAnimation(ui->pushButton,"geometry"); anim->setDuration(10000);
  //  anim->setStartValue(ui->pushButton->geometry());
  //  anim->setEndValue(QRect(200,200,100,50));
  //  anim->start();

  QPropertyAnimation *anim=new QPropertyAnimation(ui->pushButton,"geometry");
   anim->setDuration(10000);
   anim->setStartValue(ui->pushButton->geometry());
   anim->setKeyValueAt(0,QRect(0,0,100,30));
   anim->setKeyValueAt(0.8,QRect(250,250,100,30));
   anim->setKeyValueAt(1,QRect(0,0,100,30));
   anim->start();

}

Widget::~Widget()
{
  delete ui;
}

