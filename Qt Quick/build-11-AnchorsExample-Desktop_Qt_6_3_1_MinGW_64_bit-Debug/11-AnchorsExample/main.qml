import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id:redRect
        width: 100
        height: 100
        color: "red"

        anchors.bottomMargin: 10
        anchors.horizontalCenter: parent.horizontalCenter


    }

    Rectangle{
        id:greenRect
        width: 200
        height: 200
        color: "green"

        anchors.topMargin: 10
        anchors.top: redRect.bottom
        anchors.horizontalCenter: redRect.horizontalCenter
    }
}
