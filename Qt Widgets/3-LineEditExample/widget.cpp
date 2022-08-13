#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  setWindowTitle("QLineEdit");
  resize(500,300);

  QLineEdit *lineedit=new QLineEdit(this);
  lineedit->setGeometry(20,20,300,50);
  lineedit->setFont(QFont("Times",14));
  lineedit->setPlaceholderText("Enter the Username");
//  lineedit->setEnabled(false);
  lineedit->setEchoMode(QLineEdit::EchoMode::Normal);

  QLineEdit *lineedit2=new QLineEdit(this);
  lineedit2->setPlaceholderText("Enter the Password");
  lineedit2->setGeometry(20,100,300,50);
  lineedit2->setFont(QFont("Times",14));
//  lineedit->setEnabled(true);
  lineedit2->setEchoMode(QLineEdit::EchoMode::Password);
}

Widget::~Widget()
{
}

