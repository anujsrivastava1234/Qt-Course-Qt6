#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  QLineSeries *series=new QLineSeries();
  series->append(0,6);
  series->append(2,4);
  series->append(3,8);
  series->append(7,4);
  series->append(10,5);

  QChart *chart=new QChart();
  chart->addSeries(series);
  chart->createDefaultAxes();
  chart->setTitle("Line Chart Example");
  chart->setAnimationOptions(QChart::AnimationOption::SeriesAnimations);
  chart->setTheme(QChart::ChartTheme::ChartThemeDark);

  chart->legend()->setVisible(true);
  chart->legend()->setAlignment(Qt::AlignmentFlag::AlignBottom);

  QChartView *chartView=new QChartView(chart);
  chartView->setParent(ui->horizontalFrame);
}

Widget::~Widget()
{
  delete ui;
}

