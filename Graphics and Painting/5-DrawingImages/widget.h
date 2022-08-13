#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
  virtual void paintEvent(QPaintEvent *event);
};
#endif // WIDGET_H
