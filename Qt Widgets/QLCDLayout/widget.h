#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLCDNumber>
#include <QHBoxLayout>
#include <QTime>
#include <QTimer>
class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
public slots:
  void showTime();
private:
  QLCDNumber *lcd;
};
#endif // WIDGET_H
