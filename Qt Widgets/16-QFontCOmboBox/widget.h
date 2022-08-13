#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFontComboBox>
#include <QVBoxLayout>
#include <QTextEdit>

class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
public slots:
  void changeFont();
private:
  QFontComboBox *fontCombo;
  QTextEdit *edit;

};
#endif // WIDGET_H
