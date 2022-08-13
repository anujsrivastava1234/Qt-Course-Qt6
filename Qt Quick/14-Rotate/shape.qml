import QtQuick

Image {
    id: root
    signal clicked
    width: 100
    height: 100

MouseArea{
    anchors.fill: parent
    onClicked: root.clicked()
}
}

