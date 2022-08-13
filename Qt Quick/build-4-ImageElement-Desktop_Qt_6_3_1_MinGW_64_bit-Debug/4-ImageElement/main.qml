import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Image {
        id: img1
        x:50
        y:50
        width: 300
        height: 500
        source: "qrc:image/ww.png"
    }
}
