import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Rectangle{
        id:rect1
        width: 200
        height: 200
        color: "red"
        x:30
        y:30
    }
    Rectangle{
        id:rect2
        x:60 ;y:60
        width: 100
        height: 100
        border.color: "green"
        border.width: 4
        radius: 8
    }
    Rectangle{
        id:rect3
        x:100;y:200
        width: 100
        height: 100
        gradient: Gradient{
            GradientStop{position: 0.0;color:"lightsteelblue"}
            GradientStop{position: 1.0;color:"slategray"}
        }
        border.color: "slategray"
    }

}
