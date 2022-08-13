import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        width: 100
        height: 30
        color: "red"
        border.color: "green"

        Text{
            anchors.centerIn: parent
            text: "Change"
        }

        MouseArea{
            anchors.centerIn: parent
            onClicked:{
                status.text="This Text is Changed"

    }
    }
    }

    Text {
        id: status
        x:40
        y:80
        text: "Waiting...."
        horizontalAlignment: Text.AlignHCenter
    }
}

