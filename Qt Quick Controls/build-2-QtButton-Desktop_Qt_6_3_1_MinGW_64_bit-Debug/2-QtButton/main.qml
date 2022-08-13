import QtQuick
import QtQuick.Controls 2.0

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Button Example";

    background: Rectangle{

        gradient:Gradient{
            GradientStop{position: 0.0;color:"black"}
             GradientStop{position: 1.0;color:"slategray"}
        }
    }

    Button{
        text: "Click Me"
        x:50
        y:50
        width: 100
        height: 20
        font.pixelSize: 20
    }
    Button{
        id:controls
        text: "Click Me"
        x:40
        y:80
        font.pixelSize: 30

        contentItem: Text{
            text: controls.text
            font: controls.font
            opacity: enabled ? 1.0 : 0.3
            color: controls.down ? "red":"green"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter

        }

        background: Rectangle{
            implicitWidth: 100
            implicitHeight: 40
            opacity: enabled ? 1.0 : 0.3
            border.color: controls.down ? "red" : "green"
            border.width: 1.0
            radius:2
        }

    }
}
