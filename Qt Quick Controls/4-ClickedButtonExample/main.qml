import QtQuick
import QtQuick.Controls 2.5
Window {
    width: 640
    height: 480
    visible: true
    title: "Clicked Button"

    Button{
        text: "Change text"
        font.pixelSize: 20
        x:40
        y:40

        onClicked: {
            label.text="Welcome to qt6 course"
            label.font.pixelSize=20
            label.color="red"
        }

    }

    Label{
        id:label
        text: "Hello World"
        x:40
        y:80
    }
}
