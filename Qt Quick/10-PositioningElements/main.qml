import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Flow {
        anchors.centerIn: parent
        spacing: 10
        anchors.margins: 20

        Rectangle{
            width: 100
            height:100
            color: "red"
        }
        Rectangle{
            width: 100
            height:100
            color: "green"
        }
        Rectangle{
            width: 100
            height:100
            color: "yellow"
        }
        Rectangle{
            width: 100
            height:100
            color: "blue"
        }
    }
}
