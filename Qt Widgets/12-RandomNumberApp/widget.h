#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QRandomGenerator>
#include <QVBoxLayout>
#include <QLCDNumber>
#include <QPushButton>

class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();

public slots:
  void randnumber();

private:
  QLCDNumber *lcd;
  QPushButton *btn;
};
#endif // WIDGET_H
