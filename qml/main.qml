import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls.Styles 1.4
import QtQuick.Controls.Material 2.2
import QtQuick.Controls 2.13

ApplicationWindow {
    minimumHeight: 480
    minimumWidth: 640

    Material.theme: Material.Dark
    Material.accent: Material.color(Material.Green)

    visible: true

    title: qsTr("Flies project")

    ColumnLayout {
        anchors.fill: parent

        ControlsTab {
            Layout.rightMargin: 5
            Layout.leftMargin: 5
            Layout.margins: 2
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter

            Layout.fillHeight: true
            Layout.fillWidth: true
        }

        Board {
            id: board
            Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter

            Layout.fillHeight: true
            Layout.fillWidth: true
        }
    }
}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/

