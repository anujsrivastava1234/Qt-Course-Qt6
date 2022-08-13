#include "widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
{
  fontCombo=new QFontComboBox();
  connect(fontCombo,SIGNAL(currentFontChanged(QFont)),this,SLOT(changeFont()));
  edit=new QTextEdit();


  QVBoxLayout *vBox=new QVBoxLayout(this);
  vBox->addWidget(fontCombo);
  vBox->addWidget(edit);

}

Widget::~Widget()
{
}

void Widget::changeFont()
{
  QFont Font=QFont(fontCombo->itemText(fontCombo->currentIndex()));
  edit->setFont(Font);
}

