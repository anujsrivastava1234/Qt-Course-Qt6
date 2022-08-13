#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QInputDialog>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QPushButton>
class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
public slots:
  void setMyName();
  void getMyItem();

private:
  QLabel *label;
  QLineEdit *linedit;
  QPushButton *btn;
  QInputDialog *dialog;
};
#endif // WIDGET_H
