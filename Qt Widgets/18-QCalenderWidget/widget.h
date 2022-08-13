#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCalendarWidget>
#include <QLabel>
#include <QVBoxLayout>

class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
public slots:
  void changeDate();
private:
  QCalendarWidget *calendar;
  QLabel *label;

};
#endif // WIDGET_H
