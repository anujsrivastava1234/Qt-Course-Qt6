import QtQuick

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
