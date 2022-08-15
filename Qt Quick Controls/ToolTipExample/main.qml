import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("ToolTip")

    ColumnLayout{

    Button{
        text: "Save"
        ToolTip.visible: down
        ToolTip.text: "This is a Button"
    }

    Slider{
        id:slider
        value:0.5
        ToolTip{
            parent: slider.handle
            visible: Slider.pressed
            text: slider.value.toFixed(1)
        }
    }
}


}
