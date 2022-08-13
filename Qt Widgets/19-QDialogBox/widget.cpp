#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QHBoxLayout *hBox=new QHBoxLayout(this);

  label=new QLabel();
  label->setText("Choose Username");
  label->setFont(QFont("Times",14));

  linedit=new QLineEdit();
  linedit->setFont(QFont("Times",14));

  btn=new QPushButton();
  btn->setText("Choose Username");
  btn->setFont(QFont("Times",14));
//  connect(btn,SIGNAL(clicked()),this,SLOT(setMyName()));
  connect(btn,SIGNAL(clicked()),this,SLOT(getMyItem()));

   hBox->addWidget(label);
   hBox->addWidget(linedit);
   hBox->addWidget(btn);
}

Widget::~Widget()
{
}

void Widget::setMyName()
{
  QString text=QInputDialog::getText(this,"Get Username","Enter your Username");
  if(!text.isEmpty()){
      linedit->setText(text);
    }
}

void Widget::getMyItem()
{
  QList<QString> languages={"C++","Java","Python","C#"};
  QString text=QInputDialog::getItem(this,"Input Dialog","List of Language",languages,0,false);
  if(!text.isEmpty()){
      linedit->setText(text);
    }
}

