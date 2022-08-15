import QtQuick
import QtQuick.Controls
import QtCharts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Stack Bar")

    ChartView{
        id:scatterCharts
        anchors.fill: parent

        StackedBarSeries{
            id:myseries
            BarSet{label: "Bob"; values: [2, 2, 3, 4, 5, 6]}
            BarSet{label: "Bob"; values: [5, 1, 2, 4, 1, 7]}
            BarSet{label: "Bob"; values: [3, 5, 8, 13, 5, 8]}

        }
    }
}
