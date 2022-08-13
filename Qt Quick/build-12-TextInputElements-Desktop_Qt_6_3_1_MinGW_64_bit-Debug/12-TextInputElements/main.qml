import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Column{
        anchors.centerIn: parent

        TextInput{
            id:input1
            width: 96
            height: 20
            focus: true
            text: "Input 1"
            KeyNavigation.tab: input2
        }
        TextInput{
            id:input2
            width:100
            height: 20
            focus: true
            text: "Input 2"
            color: "red"
            font.pixelSize: 20
            KeyNavigation.tab: input1
        }

        Rectangle{
            id:input3
            width: 100
            height: 100
            color: "lightsteelblue"

            TextEdit{
                id:input
                anchors.fill: parent
                anchors.margins: 4
            }
        }
    }


}
