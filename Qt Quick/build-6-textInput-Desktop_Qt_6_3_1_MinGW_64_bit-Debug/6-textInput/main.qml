import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TextInput{
        id:myText
        x:50
        y:50
        color: "red"
        text:"Hello World"
        font.pixelSize: 20
        onAccepted:text1.text=text
    }

    Text{
        id:text1
        x:50
        y:100
        color: "green"
        text: "My Text"
        font.pixelSize: 20
    }

}
