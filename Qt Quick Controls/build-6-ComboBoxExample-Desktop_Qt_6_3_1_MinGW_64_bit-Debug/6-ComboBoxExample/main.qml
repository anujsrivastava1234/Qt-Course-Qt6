import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import QtQml.Models
Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Combo Box")

    Column{
        anchors.centerIn: parent

        ComboBox{
            id:combo
            model: ["C++","Java","Python"]

            onActivated: {
                label.text="You have selected "+combo.currentText
            }
        }

        Label{
            id:label
            text:"Hello"
            font.pixelSize:20
        }

         ComboBox{
             editable: true
             model: ListModel{
                 id:model
                 ListElement{text:"Python"}
                 ListElement{text:"C++"}
                 ListElement{text:"Java"}
             }
             onAccepted: {
                 if(find(editText)===-1){
                     model.append({text:editText})
                 }
             }
         }
    }
}
