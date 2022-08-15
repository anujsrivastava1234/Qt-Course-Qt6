import QtQuick
import QtQuick.Controls
import QtCharts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Line Charts")

    ChartView{
        id:mySeries
        anchors.fill: parent
        theme:ChartView.ChartThemeBlueCerulean
        animationOptions: ChartView.SeriesTypeLine

        LineSeries{
            name:"Series"
            XYPoint{x:0;y:0}
            XYPoint{x:1.1;y:2.1}
            XYPoint{x:1.9;y:3.3}
            XYPoint{x:2.1;y:2.1}
            XYPoint{x:3.1;y:1.2}
            XYPoint{x:4.1;y:3.3}
        }
    }
}
