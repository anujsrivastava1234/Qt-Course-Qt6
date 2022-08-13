import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

   Button{

   }

    Text {
        id: status
        text: "Waiting..."
//        anchors.centerIn: parent
        y:96
        x:20
        width: 100
        height: 20
    }
}

