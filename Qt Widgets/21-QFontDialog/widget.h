#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QFontDialog>
#include <QPushButton>
#include <QVBoxLayout>

class Widget : public QWidget
{
  Q_OBJECT

public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
public slots:
  void changeFont();

private:
  QTextEdit *textedit;
  QPushButton *btn;
  QFontDialog *fontDialog;
};
#endif // WIDGET_H
