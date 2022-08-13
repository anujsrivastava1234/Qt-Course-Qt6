import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Shape{
        id:circle
        x:84
        y:68
        source: "qrc:images/circle.png"
        onClicked: {
            x+=20
            y +=10
        }
    }

    Shape{
        id:rectangle
        x:184
        y:68
        source: "qrc:images/rectangle.png"
        onClicked: {
            x+=20
            rotation+=15
            scale+=0.5
        }
    }
}
