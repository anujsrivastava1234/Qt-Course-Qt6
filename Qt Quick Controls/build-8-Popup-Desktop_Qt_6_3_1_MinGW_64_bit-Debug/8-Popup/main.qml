import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button{
        text:"Click Me"

        onClicked: popup.open()
    }

    Popup{
        id:popup
        x:100
        y:100
        width:200
        height: 200
        modal:true
        focus:true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutside

        contentItem: Text{
            text: "Welcome to qt 6"
            font.pixelSize: 30
            color: "red"
        }

        background: BorderImage {
            id: image
            source: "qrc:images/download-removebg-preview.png"
        }
    }

}
