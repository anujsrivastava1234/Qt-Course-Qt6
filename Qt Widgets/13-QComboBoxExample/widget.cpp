#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  label=new QLabel();
  label->setText("Select Account Type: ");
  label->setFont(QFont("Times",15));

  finalabel=new QLabel();
  finalabel->setText("Hello");
  finalabel->setFont(QFont("Times",15));

  combo=new QComboBox();
  combo->setFont(QFont("Times",14));
  combo->addItem("Saving");
  combo->addItem("Current");
  combo->addItem("Closed");
  connect(combo,SIGNAL(currentTextChanged(QString)),this,SLOT(combochanged()));

  QHBoxLayout *hBox=new QHBoxLayout();
  hBox->addWidget(label);
  hBox->addWidget(combo);

  QVBoxLayout *vBox=new QVBoxLayout(this);
  vBox->addWidget(finalabel);
  vBox->addLayout(hBox);
}

Widget::~Widget()
{
}

void Widget::combochanged()
{
  QString item=combo->currentText();
  finalabel->setText("You selected account type "+item);
}

