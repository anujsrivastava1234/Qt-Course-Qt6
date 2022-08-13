#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QVBoxLayout *vBox=new QVBoxLayout(this);
  textEdit=new QTextEdit();
  btn=new QPushButton();
  btn->setText("Change Color");
  connect(btn,SIGNAL(clicked()),this,SLOT(changeColor()));
  vBox->addWidget(textEdit);
  vBox->addWidget(btn);
}

Widget::~Widget()
{
}

void Widget::changeColor()
{
  colorDialog=new QColorDialog();

  QColor color=colorDialog->getColor();
  textEdit->setTextColor(color);
}

