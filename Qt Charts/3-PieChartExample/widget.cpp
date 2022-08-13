#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);

  QPieSeries *series=new QPieSeries();
  series->append("C++",80);
  series->append("Python",70);
  series->append("Java",50);
  series->append("C#",40);
  series->append("PHP",30);

  //adding a slice
  QPieSlice *slice=series->slices().at(2);
  slice->setExploded(true);
  slice->setLabelVisible(true);
  slice->setPen(QPen(Qt::darkGreen,2));
  slice->setBrush(Qt::green);

  slice=series->slices().at(1);
  slice->setExploded(true);
  slice->setLabelVisible(true);
  slice->setPen(QPen(Qt::darkBlue,2));
  slice->setBrush(Qt::red);

  QChart *chart=new QChart();
  chart->addSeries(series);
  chart->setTitle("Pie chart example in c++ and Qt6");
  chart->setAnimationOptions(QChart::AnimationOption::SeriesAnimations);


  QChartView *chartView=new QChartView(chart);
  chartView->setParent(ui->horizontalFrame);
}

Widget::~Widget()
{
  delete ui;
}

