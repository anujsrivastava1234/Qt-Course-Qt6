#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  label=new QLabel();
  label->setText("0");
  label->setFont(QFont("Times",14));

  QHBoxLayout *hBox=new QHBoxLayout(this);
  slider=new QSlider();
  slider->setOrientation(Qt::Horizontal);
  slider->setTickPosition(QSlider::TicksBelow);
  slider->setTickInterval(5);
  slider->setMinimum(1);
  slider->setMaximum(100);
  connect(slider,SIGNAL(valueChanged(int)),this,SLOT(changeslider()));

  hBox->addWidget(slider);
  hBox->addWidget(label);

}

Widget::~Widget()
{
}

void Widget::changeslider()
{
  int value=slider->value();
  label->setText(QString::number(value));
}

