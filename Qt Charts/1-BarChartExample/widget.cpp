#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
  : QWidget(parent)
  , ui(new Ui::Widget)
{
  ui->setupUi(this);
  QBarSet *set0=new QBarSet("Parwiz");
  QBarSet *set1=new QBarSet("Bob");
  QBarSet *set2=new QBarSet("Tom");
  QBarSet *set3=new QBarSet("Jhon");
  QBarSet *set4=new QBarSet("Doe");

  *set0 << 1 << 2 << 3 << 4 << 5 << 6;
  *set1 << 5 << 0 << 0 << 4 << 0 << 7;
  *set2 << 3 << 5 << 8 << 13 << 8 << 5;
  *set3 << 5 << 6 << 7 << 3 << 4 << 5;
  *set4 << 9 << 7 << 5 << 3 << 1 << 2;

  QBarSeries *series=new QBarSeries();
  series->append(set0);
  series->append(set1);
  series->append(set2);
  series->append(set3);
  series->append(set4);

  QChart *chart=new QChart();
  chart->addSeries(series);
  chart->setTitle("BarChart example in Qt6 and C++");

  QStringList categories;
  categories<<"Jan"<<"Feb"<<"Mar"<<"Apirl"<<"May"<<"Jun";
  QBarCategoryAxis *axis=new QBarCategoryAxis();
  axis->append(categories);
  chart->createDefaultAxes();
  chart->addAxis(axis,Qt::AlignmentFlag::AlignRight);

  QChartView *chartView=new QChartView(chart);
  chartView->setParent(ui->horizontalFrame);
}

Widget::~Widget()
{
  delete ui;
}

