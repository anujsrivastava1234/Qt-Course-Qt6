#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QSpinBox>
class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
private slots:
  void changeSpinBox();
public:
  QLabel *label;
  QLineEdit *price;
  QLineEdit *total;
  QSpinBox *spinBox;
};
#endif // WIDGET_H
