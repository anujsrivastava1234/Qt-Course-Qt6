#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QColorDialog>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QPushButton>
class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
public slots:
  void changeColor();
private:
  QColorDialog *colorDialog;
  QTextEdit *textEdit;
  QPushButton *btn;
};
#endif // WIDGET_H
