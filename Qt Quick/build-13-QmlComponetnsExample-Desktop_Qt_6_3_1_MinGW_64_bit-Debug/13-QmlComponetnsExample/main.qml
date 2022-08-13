import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

   button{

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

Rectangle{
    id:root
    width: 100
    height: 20
    property alias text: label.text
    signal clicked
    color: "red"
    border.color: "green"

    Text {
        id:label
//            anchors.fill: parent
        anchors.centerIn: parent
//            anchors.horizontalCenter: parent.horizontalCenter
        text: "Change Text"
    }

    MouseArea{
        anchors.fill: parent
        onClicked: {
            root.clicked();
        }
    }
}
