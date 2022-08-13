import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id:button
        x:10
        y:10
        width: 120
        height: 26
        color: "lightsteelblue"

        Text {
            id: btntext
            text: "Change Text"
            anchors.centerIn: parent
            font.bold: true
        }

        MouseArea{
            id:area
            anchors.fill: parent
            onClicked: {
                status.text="Welcome to Qt6"
                status.color="red"
                status.font.pixelSize=20
            }
        }
    }

    Text{
        id:status
        x:12
        y:50
        text: "Hello World"
        width: 116
        height: 26
    }

}
