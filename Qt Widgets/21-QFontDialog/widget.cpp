#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  QVBoxLayout *vBox=new QVBoxLayout(this);

  textedit=new QTextEdit();
  btn=new QPushButton();
  btn->setText("Change Font");
  connect(btn,SIGNAL(clicked()),this,SLOT(changeFont()));

  vBox->addWidget(textedit);
  vBox->addWidget(btn);

}

Widget::~Widget()
{
}

void Widget::changeFont()
{
  bool ok;
  fontDialog =new QFontDialog();
  QFont font=fontDialog->getFont(&ok);
  textedit->setFont(font);
}

