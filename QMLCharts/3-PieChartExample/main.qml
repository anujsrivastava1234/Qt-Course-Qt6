import QtQuick
import QtQuick.Controls
import QtCharts
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Pie Charts")

    ChartView{
        id:mySeries
        antialiasing: true
        anchors.fill: parent
        theme: ChartView.ChartThemeDark
        animationOptions: ChartView.SeriesTypePie

        PieSeries{
            id:pieSeries
            PieSlice{label: "C++";value: 90}
            PieSlice{label: "Python";value: 80}
            PieSlice{label: "Java";value: 60}
            PieSlice{label: "Rust";value: 40}

        }
    }

    Component.onCompleted: {
        pieSeries.find("C++").exploded=true
    }
}
