#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  QPieSeries *series=new QPieSeries();
  series->setHoleSize(0.35);
  series->append("Protiens 4.28%",4.28);

  QPieSlice *slice=new QPieSlice("Fat 15.6%",15.6);
  slice->setExploded(true);
  slice->setLabelVisible(true);

  series->append("Other 23.8%",23.8);
  series->append("Other 56.4%",56.4);

  QChart *chart=new QChart();
  chart->addSeries(series);

  chart->setAnimationOptions(QChart::AnimationOption::SeriesAnimations);
  chart->setTitle("Donut Chart in Qt6 and C++");
  chart->setTheme(QChart::ChartThemeBlueCerulean);

  QChartView *chartView=new QChartView(chart);
  chartView->setParent(ui->horizontalFrame);


}

Widget::~Widget()
{
  delete ui;
}

