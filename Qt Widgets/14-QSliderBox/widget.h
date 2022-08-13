#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSlider>
#include <QLabel>
#include <QHBoxLayout>
class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
public slots:
  void changeslider();
private:
  QSlider *slider;
  QLabel *label;
};
#endif // WIDGET_H
