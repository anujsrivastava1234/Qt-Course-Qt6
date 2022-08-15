import QtQuick
import QtQuick.Controls
import QtCharts

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Bar Charts")

    ChartView{
        anchors.fill: parent
        antialiasing: true
        theme:ChartView.ChartThemeDark
        animationOptions: ChartView.SeriesAnimations

        BarSeries{
            id:mySeries
            BarSet{label:"Larry";values:[2, 2, 3, 4, 5, 6]}
            BarSet{label:"James";values:[5, 1, 2, 4, 1, 7]}
            BarSet{label:"Curt";values:[3, 5, 8, 13, 5, 8]}
        }
    }
}
