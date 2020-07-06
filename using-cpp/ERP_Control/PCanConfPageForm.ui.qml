import QtQuick 2.11
import QtQuick.Controls 2.4
import Qt.labs.calendar 1.0

Page {
    id: page
    width: 1280
    height: 720

    readonly property int steer_MIN_ANGLE: -28
    readonly property int steer_MAX_ANGLE: 28
    readonly property int speed_MIN: 0
    readonly property int speed_MAX: 20
    readonly property int brake_MIN: 0
    readonly property int brake_MAX: 100

    //Enable
    property alias activeCAN: switchActive.checked
    property alias autoControl: switchAuto.checked
    property alias estopControl: switchEstop.checked
    property alias steerControl: switchSteerControl.checked
    property alias speedControl: switchSpeedControl.checked
    property alias ignOvr: checkIgnOvr.checked

    // GEAR
    property alias gearDrive: rbuttonDrive.checked
    property alias gearNeutral: rbuttonNeutral.checked
    property alias gearReverse: rbuttonReverse.checked

    // Value
    property alias steerAngle: spinBoxSteerAngle.value
    property alias speed: sliderSpeed.value
    property alias brake: sliderBrake.value

    header: Label {
        text: qsTr("ERP42 Control Panel")
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: Qt.application.font.pixelSize * 2
    }

    Switch {
        id: switchActive
        x: 20
        y: 6
        text: qsTr("Active")
    }

    Column {
        x: 20
        y: 46
        width: 550
        height: 100
        spacing: 10

        Row {
            id: row1
            width: 550
            height: 30
            spacing: 20

            Switch {
                id: switchAuto
                enabled: switchActive.checked
                text: qsTr("AUTO")
                anchors.verticalCenter: parent.verticalCenter
            }

            Switch {
                id: switchEstop
                enabled: switchActive.checked
                text: qsTr("ESTOP")
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Row {
            id: row3
            width: 550
            height: 30
            spacing: 20

            Switch {
                id: switchSteerControl
                enabled: switchActive.checked
                text: qsTr("Steer Control")
                anchors.verticalCenter: parent.verticalCenter
            }

            Switch {
                id: switchSpeedControl
                enabled: switchActive.checked
                text: qsTr("Speed Control")
                anchors.verticalCenter: parent.verticalCenter
            }

            CheckBox {
                id: checkIgnOvr
                enabled: switchActive.checked
                text: qsTr("Ignore")
                anchors.verticalCenter: parent.verticalCenter
            }
        }

        Row {
            id: row2
            width: 550
            height: 30
            spacing: 20

            Text {
                id: textGear
                text: qsTr("GEAR")
                anchors.verticalCenter: parent.verticalCenter
            }

            RadioButton {
                id: rbuttonDrive
                enabled: switchActive.checked
                text: qsTr("DRIVE")
            }

            RadioButton {
                id: rbuttonNeutral
                enabled: switchActive.checked
                text: qsTr("NEUTRAL")
            }
            RadioButton {
                id: rbuttonReverse
                enabled: switchActive.checked
                text: qsTr("REVERSE")
            }
        }
    }

    Row {
        id: row4
        x: 22
        y: 200
        width: 605
        height: 280

        Column {
            id: columnSteerAngle
            width: 200
            height: 280
            spacing: 10

            Text {
                text: qsTr("Steer Angle[deg]")
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 12
            }

            SpinBox {
                id: spinBoxSteerAngle
                editable: true
                stepSize: 1
                from: steer_MIN_ANGLE
                to: steer_MAX_ANGLE
                value: dialSteerAngle.value
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Dial {
                id: dialSteerAngle
                width: 200
                height: 200
                inputMode: Dial.Circular
                stepSize: 1
                wheelEnabled: true
                from: steer_MIN_ANGLE
                to: steer_MAX_ANGLE
                value: dialSteerAngle.value //steerAngle
                anchors.horizontalCenter: parent.horizontalCenter
                Text {
                    id: text4
                    text: "-28"
                    anchors.bottom: parent.bottom
                    anchors.left: parent.left
                    font.pixelSize: 12
                }

                Text {
                    id: text5
                    text: "28"
                    anchors.bottom: parent.bottom
                    anchors.right: parent.right
                    font.pixelSize: 12
                }
            }
        }

        Column {
            id: columnSpeed
            width: 200
            height: 280
            Text {
                id: text3
                text: qsTr("Speed[KPH]")
                font.pixelSize: 12
                anchors.horizontalCenter: parent.horizontalCenter
            }

            SpinBox {
                id: spinBoxSpeed
                to: speed_MAX
                from: speed_MIN
                editable: true
                stepSize: 1
                value: pcanManager.Speed
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Slider {
                id: sliderSpeed
                to: speed_MAX
                from: speed_MIN

                anchors.horizontalCenter: parent.horizontalCenter
                stepSize: 1
                orientation: Qt.Vertical
                value: pcanManager.Speed

                Text {
                    text: "0"
                    anchors.bottom: parent.bottom
                    anchors.left: parent.right
                    font.pixelSize: 12
                }

                Text {
                    text: "20"
                    anchors.top: parent.top
                    anchors.left: parent.right
                    font.pixelSize: 12
                }
            }

            spacing: 10
        }

        Column {
            id: columnAccel
            width: 200
            height: 280
            spacing: 10

            Text {
                text: qsTr("Brake")
                anchors.horizontalCenter: parent.horizontalCenter
                font.pixelSize: 12
            }

            SpinBox {
                id: spinBoxBrake
                to: brake_MAX
                from: brake_MIN
                value: sliderBrake.value
                stepSize: 1
                anchors.horizontalCenter: parent.horizontalCenter
                editable: true
            }

            Slider {
                id: sliderBrake
                to: brake_MAX
                from: brake_MIN
                anchors.horizontalCenter: parent.horizontalCenter
                stepSize: 1
                orientation: Qt.Vertical
                value: pcanManager.Brake
                Text {
                    text: "0"
                    anchors.bottom: parent.bottom
                    anchors.left: parent.right
                    font.pixelSize: 12
                }

                Text {
                    text: "100"
                    anchors.top: parent.top
                    anchors.left: parent.right
                    font.pixelSize: 12
                }
            }
        }
    }

    Text {
        id: text6
        x: 20
        y: 533
        text: qsTr("Console Output")
        font.pixelSize: 12
    }

    TextArea {
        id: textArea
        x: 22
        y: 561
        width: 550
        height: 44
        text: qsTr(canManager.TextArea)
        renderType: Text.NativeRendering
        verticalAlignment: Text.AlignTop
        textFormat: Text.AutoText
        wrapMode: Text.WrapAnywhere
        readOnly: true

        //            TextEdit: canManager.TextArea
    }

    Button {
        id: button
        x: 1110
        y: 552
        width: 143
        height: 63
        text: qsTr("Button")
    }
}
