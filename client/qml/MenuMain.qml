import QtQuick 2.12
import QtQuick.Controls 2.5
import QtQuick.Layouts 1.12

Page {
  width: 480
  height: 640
  property bool showMenuMain: true
  property var sTatus : 0
  property bool clickShowPrizeBtn: false
  property var time : 15
  property var angle : 0
  

  SelectButtonPage{
    id : menuSelectButton
    _visible: showMenuMain
    btnMoveUp: sTatus == 1 ? true : false

    startY: 640
    textBtn1: "Chơi 1 mình"
    textBtn2: "Thi đấu online"
    textBtn4: "Xem lich su dau"
    textBtn3: "Đổi mật khẩu"
    textBtn5: "Đăng xuất"

    funcBtn1Click: btn1Click

    funcBtn2Click: btn2Click

    funcBtn4Click: btn4Click

    funcBtn3Click: btn3Click

    funcBtn5Click: btn5Click
  }

  Logo {
    visible: showMenuMain
    anchors.horizontalCenter: parent.horizontalCenter
  }

  Text {
    id: text
    visible: showMenuMain
    width: 220
    height: 50
    anchors.top: parent.top
    anchors.topMargin: 265
    anchors.horizontalCenter: parent.horizontalCenter
    font.bold: true
    font.pointSize: 16
    font.family: "roboto"
    text: "User: " + backEnd.user_name + "<br>Rank: " + backEnd.rank + "<br>Point: " + backEnd.point
    verticalAlignment: Text.AlignVCenter
    horizontalAlignment: Text.AlignHCenter
    color: "white"
  }

  // Text {
  //   id: text2
  //   visible: showMenuMain
  //   width: 220
  //   height: 50
  //   anchors.top: parent.top
  //   anchors.topMargin: 295
  //   anchors.horizontalCenter: parent.horizontalCenter
  //   font.bold: true
  //   font.pointSize: 16
  //   font.family: "roboto"
  //   text: "Score PvP:"
  //   verticalAlignment: Text.AlignVCenter
  //   horizontalAlignment: Text.AlignHCenter
  //   color: "white"
  // }

  GameScreen {
    id : gameScreen
    btnMoveUp: sTatus == 2 ? true : false
  }

  PrizePopup{
    id: prizePopup
    modal : true

    onOpened : {
      if (!menuMain.clickShowPrizeBtn && menuMain.sTatus != 2){
        commericalBreakSound.stop()
        menuMain.resetBtnToStartY()
        prizeTheme.play()
        prizePopup.startHightLightPrize()
      }
      else if (!menuMain.clickShowPrizeBtn && menuMain.sTatus == 2){
        prizePopup.flickerPrize()
      }
      else {
        prize = backEnd.prize + 1
      }
    }
  }

  ResultPopup{
    id : resultPopup
  }

  FoundOpponentPopup{
    id : foundOpponentPopup
  }

  Timer {
    id : delayStartPvP
    interval: 3000
    repeat: false
    running: false
    
    onTriggered : {
      foundOpponentPopup.close()
      rootWindow.lose = false
      menuSelectButton.startBtnAnimDown()
    }
  }

  function startBtnAnimUp(){
    gameScreen.startBtnAnimUp()
  }

  function startBtnAnimUpInMenuMain(){
    menuSelectButton.startBtnAnimUp()
  }

  function startBtnAnimDownInMenuMain(){
    menuSelectButton.startBtnAnimDown()
  }

  function resetBtnToStartY(){
    gameScreen.resetBtnToStartY()
  }

  function resetBtnToStartYInMenuMain(){
    menuSelectButton.resetBtnToStartY()
  }

  function flickerCorrectAnswer(count){
    gameScreen.flickerCorrectAnswer(count)
  }

  function showPrizePopup(){
    prizePopup.open()
  }

  function showResultPopup(){
    resultPopup.open()
  }

  function btn1Click(){
    rootWindow.lose = false
    menuSelectButton.startBtnAnimDown()
    backEnd.playAlone()
  }

  function btn2Click(){
    menuMain.sTatus = 3
    findOpponentPopup.popMessage = "Đang tìm đối thủ..."
    findOpponentPopup.open()
    backEnd.playPvP()
  }

  function btn4Click(){
    backEnd.storeHistory()
    historyDialog.open()
  }

  function btn3Click(){
    stackView.push("ChangePasswordPage.qml")
  }

  function btn5Click(){
    backEnd.logOut()
    stackView.pop()
  }

  function resetToDefaultProperties(){
    rootWindow.isPlayPvP = false
    rootWindow.click_change_question = false
    rootWindow.lose = false
    menuMain.showMenuMain = true
    menuMain.sTatus = 1
    prizePopup.runningHighLightPrize = false
    prizePopup.prize = 0
    gameScreen.resetHelperIcon()
    menuMain.resetBtnToStartYInMenuMain()
    menuMain.startBtnAnimUpInMenuMain()
    menuSelectButton.funcBtn1Click = menuMain.btn1Click
    menuSelectButton.funcBtn2Click = menuMain.btn2Click
    menuSelectButton.funcBtn4Click = menuMain.btn4Click
    menuSelectButton.funcBtn3Click = menuMain.btn3Click
    menuSelectButton.funcBtn5Click = menuMain.btn5Click
    backEnd.reward = 0
    backEnd.rewardChanged()
    backEnd.prize = 0
    backEnd.prizeChanged()
  }

  function showFoundOpponentPopup(){
    foundOpponentPopup.open()
    delayStartPvP.start()
  }

  function openVotePopup(){
    gameScreen.openVotePopup()
  }

  function openCallPhonePopup(){
    gameScreen.openCallPhonePopup()
  }

  function stopCountDown(){
    gameScreen.stopCountDown()
  }

  Dialog {
    id: historyDialog
    visible: false
    title: "History"

          background: Rectangle {
    opacity: 0.5
    color: "gray"
    anchors.fill: parent
  }


    Image {
        id: backIcon
        width: 50
        height: 50
        anchors.left: parent.left
        anchors.leftMargin: 0
        anchors.top: parent.top
        anchors.topMargin: 0
        source: applicationDirPath + "/assets/Sprite/back_icon.png"
        fillMode: Image.PreserveAspectFit

        HoverHandler{
            onHoveredChanged: {
                if (hovered)
                {
                    backIcon.source = applicationDirPath + "/assets/Sprite/back_icon_hover.png"
                }
                else
                {
                    backIcon.source = applicationDirPath + "/assets/Sprite/back_icon.png"
                }
            }
        }

        MouseArea{
            anchors.fill: parent
            onClicked: {
                clickSound.play()
                historyDialog.close()
            }
        }
    }

    contentItem: Rectangle {
      implicitWidth: 480
      implicitHeight: 640


      Text {
        id: titleHistory
        text: "<h1><b><i><font color='red'>Match History</font></i></b></h1>"
        font.family: "Times New Roman"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 30
      }
      Text {
        id: guideText
        width: 350
        height: 400
        text: "<font color='black'>" + backEnd.History + "</font>"
        font.family: "Times New Roman"
        font.pointSize: 15
        wrapMode: Text.WordWrap
        anchors.top: titleHistory.bottom
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 30
      }
    }
  }


}