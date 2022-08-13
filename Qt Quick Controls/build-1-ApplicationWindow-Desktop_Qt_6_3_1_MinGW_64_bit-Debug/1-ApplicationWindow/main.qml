import QtQuick
import QtQuick.Controls 2.5

ApplicationWindow {
    id:root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    background:Rectangle{
        gradient: Gradient{
            GradientStop{position: 0.0;color: "#ffffff"}
            GradientStop{position: 1.0;color: "#c1bbf9"}
        }
    }
}
