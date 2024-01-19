/****************************************************************************
** Meta object code from reading C++ file 'BackEnd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "headers/BackEnd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BackEnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BackEnd_t {
    QByteArrayData data[86];
    char stringdata0[987];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BackEnd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BackEnd_t qt_meta_stringdata_BackEnd = {
    {
QT_MOC_LITERAL(0, 0, 7), // "BackEnd"
QT_MOC_LITERAL(1, 8, 15), // "userNameChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 11), // "RankChanged"
QT_MOC_LITERAL(4, 37, 12), // "pointChanged"
QT_MOC_LITERAL(5, 50, 14), // "HistoryChanged"
QT_MOC_LITERAL(6, 65, 16), // "enemyNameChanged"
QT_MOC_LITERAL(7, 82, 12), // "prizeChanged"
QT_MOC_LITERAL(8, 95, 15), // "questionChanged"
QT_MOC_LITERAL(9, 111, 8), // "aChanged"
QT_MOC_LITERAL(10, 120, 8), // "bChanged"
QT_MOC_LITERAL(11, 129, 8), // "cChanged"
QT_MOC_LITERAL(12, 138, 8), // "dChanged"
QT_MOC_LITERAL(13, 147, 14), // "connectSuccess"
QT_MOC_LITERAL(14, 162, 11), // "connectFail"
QT_MOC_LITERAL(15, 174, 12), // "loginSuccess"
QT_MOC_LITERAL(16, 187, 8), // "loggedIn"
QT_MOC_LITERAL(17, 196, 14), // "accountBlocked"
QT_MOC_LITERAL(18, 211, 15), // "accountNotExist"
QT_MOC_LITERAL(19, 227, 13), // "wrongPassword"
QT_MOC_LITERAL(20, 241, 13), // "signupSuccess"
QT_MOC_LITERAL(21, 255, 12), // "accountExist"
QT_MOC_LITERAL(22, 268, 21), // "changePasswordSuccess"
QT_MOC_LITERAL(23, 290, 15), // "sameOldPassword"
QT_MOC_LITERAL(24, 306, 22), // "callPhoneAnswerChanged"
QT_MOC_LITERAL(25, 329, 12), // "voteAChanged"
QT_MOC_LITERAL(26, 342, 12), // "voteBChanged"
QT_MOC_LITERAL(27, 355, 12), // "voteCChanged"
QT_MOC_LITERAL(28, 368, 12), // "voteDChanged"
QT_MOC_LITERAL(29, 381, 13), // "correctAnswer"
QT_MOC_LITERAL(30, 395, 13), // "rewardChanged"
QT_MOC_LITERAL(31, 409, 4), // "lose"
QT_MOC_LITERAL(32, 414, 5), // "lose2"
QT_MOC_LITERAL(33, 420, 11), // "foundPlayer"
QT_MOC_LITERAL(34, 432, 8), // "openVote"
QT_MOC_LITERAL(35, 441, 13), // "openCallPhone"
QT_MOC_LITERAL(36, 455, 14), // "notFoundPlayer"
QT_MOC_LITERAL(37, 470, 27), // "enemyCurrentQuestionChanged"
QT_MOC_LITERAL(38, 498, 19), // "enemySecondsChanged"
QT_MOC_LITERAL(39, 518, 18), // "enemyStatusChanged"
QT_MOC_LITERAL(40, 537, 17), // "statusGameChanged"
QT_MOC_LITERAL(41, 555, 13), // "showResultPvP"
QT_MOC_LITERAL(42, 569, 15), // "connectToServer"
QT_MOC_LITERAL(43, 585, 18), // "disconnectToServer"
QT_MOC_LITERAL(44, 604, 6), // "signIn"
QT_MOC_LITERAL(45, 611, 8), // "username"
QT_MOC_LITERAL(46, 620, 8), // "password"
QT_MOC_LITERAL(47, 629, 6), // "signUp"
QT_MOC_LITERAL(48, 636, 6), // "logOut"
QT_MOC_LITERAL(49, 643, 14), // "changePassword"
QT_MOC_LITERAL(50, 658, 11), // "newPassword"
QT_MOC_LITERAL(51, 670, 9), // "playAlone"
QT_MOC_LITERAL(52, 680, 12), // "choiceAnswer"
QT_MOC_LITERAL(53, 693, 6), // "answer"
QT_MOC_LITERAL(54, 700, 4), // "time"
QT_MOC_LITERAL(55, 705, 10), // "fiftyFifty"
QT_MOC_LITERAL(56, 716, 9), // "callPhone"
QT_MOC_LITERAL(57, 726, 4), // "vote"
QT_MOC_LITERAL(58, 731, 14), // "changeQuestion"
QT_MOC_LITERAL(59, 746, 8), // "stopGame"
QT_MOC_LITERAL(60, 755, 8), // "overTime"
QT_MOC_LITERAL(61, 764, 7), // "playPvP"
QT_MOC_LITERAL(62, 772, 12), // "storeHistory"
QT_MOC_LITERAL(63, 785, 12), // "changedPoint"
QT_MOC_LITERAL(64, 798, 9), // "user_name"
QT_MOC_LITERAL(65, 808, 4), // "rank"
QT_MOC_LITERAL(66, 813, 5), // "point"
QT_MOC_LITERAL(67, 819, 7), // "History"
QT_MOC_LITERAL(68, 827, 10), // "enemy_name"
QT_MOC_LITERAL(69, 838, 5), // "prize"
QT_MOC_LITERAL(70, 844, 8), // "question"
QT_MOC_LITERAL(71, 853, 1), // "a"
QT_MOC_LITERAL(72, 855, 1), // "b"
QT_MOC_LITERAL(73, 857, 1), // "c"
QT_MOC_LITERAL(74, 859, 1), // "d"
QT_MOC_LITERAL(75, 861, 17), // "call_phone_answer"
QT_MOC_LITERAL(76, 879, 22), // "enemy_current_question"
QT_MOC_LITERAL(77, 902, 13), // "enemy_seconds"
QT_MOC_LITERAL(78, 916, 12), // "enemy_status"
QT_MOC_LITERAL(79, 929, 5), // "voteA"
QT_MOC_LITERAL(80, 935, 5), // "voteB"
QT_MOC_LITERAL(81, 941, 5), // "voteC"
QT_MOC_LITERAL(82, 947, 5), // "voteD"
QT_MOC_LITERAL(83, 953, 14), // "correct_answer"
QT_MOC_LITERAL(84, 968, 6), // "reward"
QT_MOC_LITERAL(85, 975, 11) // "status_game"

    },
    "BackEnd\0userNameChanged\0\0RankChanged\0"
    "pointChanged\0HistoryChanged\0"
    "enemyNameChanged\0prizeChanged\0"
    "questionChanged\0aChanged\0bChanged\0"
    "cChanged\0dChanged\0connectSuccess\0"
    "connectFail\0loginSuccess\0loggedIn\0"
    "accountBlocked\0accountNotExist\0"
    "wrongPassword\0signupSuccess\0accountExist\0"
    "changePasswordSuccess\0sameOldPassword\0"
    "callPhoneAnswerChanged\0voteAChanged\0"
    "voteBChanged\0voteCChanged\0voteDChanged\0"
    "correctAnswer\0rewardChanged\0lose\0lose2\0"
    "foundPlayer\0openVote\0openCallPhone\0"
    "notFoundPlayer\0enemyCurrentQuestionChanged\0"
    "enemySecondsChanged\0enemyStatusChanged\0"
    "statusGameChanged\0showResultPvP\0"
    "connectToServer\0disconnectToServer\0"
    "signIn\0username\0password\0signUp\0logOut\0"
    "changePassword\0newPassword\0playAlone\0"
    "choiceAnswer\0answer\0time\0fiftyFifty\0"
    "callPhone\0vote\0changeQuestion\0stopGame\0"
    "overTime\0playPvP\0storeHistory\0"
    "changedPoint\0user_name\0rank\0point\0"
    "History\0enemy_name\0prize\0question\0a\0"
    "b\0c\0d\0call_phone_answer\0enemy_current_question\0"
    "enemy_seconds\0enemy_status\0voteA\0voteB\0"
    "voteC\0voteD\0correct_answer\0reward\0"
    "status_game"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BackEnd[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      57,   14, // methods
      22,  370, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      40,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  299,    2, 0x06 /* Public */,
       3,    0,  300,    2, 0x06 /* Public */,
       4,    0,  301,    2, 0x06 /* Public */,
       5,    0,  302,    2, 0x06 /* Public */,
       6,    0,  303,    2, 0x06 /* Public */,
       7,    0,  304,    2, 0x06 /* Public */,
       8,    0,  305,    2, 0x06 /* Public */,
       9,    0,  306,    2, 0x06 /* Public */,
      10,    0,  307,    2, 0x06 /* Public */,
      11,    0,  308,    2, 0x06 /* Public */,
      12,    0,  309,    2, 0x06 /* Public */,
      13,    0,  310,    2, 0x06 /* Public */,
      14,    0,  311,    2, 0x06 /* Public */,
      15,    0,  312,    2, 0x06 /* Public */,
      16,    0,  313,    2, 0x06 /* Public */,
      17,    0,  314,    2, 0x06 /* Public */,
      18,    0,  315,    2, 0x06 /* Public */,
      19,    0,  316,    2, 0x06 /* Public */,
      20,    0,  317,    2, 0x06 /* Public */,
      21,    0,  318,    2, 0x06 /* Public */,
      22,    0,  319,    2, 0x06 /* Public */,
      23,    0,  320,    2, 0x06 /* Public */,
      24,    0,  321,    2, 0x06 /* Public */,
      25,    0,  322,    2, 0x06 /* Public */,
      26,    0,  323,    2, 0x06 /* Public */,
      27,    0,  324,    2, 0x06 /* Public */,
      28,    0,  325,    2, 0x06 /* Public */,
      29,    0,  326,    2, 0x06 /* Public */,
      30,    0,  327,    2, 0x06 /* Public */,
      31,    0,  328,    2, 0x06 /* Public */,
      32,    0,  329,    2, 0x06 /* Public */,
      33,    0,  330,    2, 0x06 /* Public */,
      34,    0,  331,    2, 0x06 /* Public */,
      35,    0,  332,    2, 0x06 /* Public */,
      36,    0,  333,    2, 0x06 /* Public */,
      37,    0,  334,    2, 0x06 /* Public */,
      38,    0,  335,    2, 0x06 /* Public */,
      39,    0,  336,    2, 0x06 /* Public */,
      40,    0,  337,    2, 0x06 /* Public */,
      41,    0,  338,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      42,    0,  339,    2, 0x02 /* Public */,
      43,    0,  340,    2, 0x02 /* Public */,
      44,    2,  341,    2, 0x02 /* Public */,
      47,    2,  346,    2, 0x02 /* Public */,
      48,    0,  351,    2, 0x02 /* Public */,
      49,    1,  352,    2, 0x02 /* Public */,
      51,    0,  355,    2, 0x02 /* Public */,
      52,    2,  356,    2, 0x02 /* Public */,
      55,    0,  361,    2, 0x02 /* Public */,
      56,    0,  362,    2, 0x02 /* Public */,
      57,    0,  363,    2, 0x02 /* Public */,
      58,    0,  364,    2, 0x02 /* Public */,
      59,    0,  365,    2, 0x02 /* Public */,
      60,    0,  366,    2, 0x02 /* Public */,
      61,    0,  367,    2, 0x02 /* Public */,
      62,    0,  368,    2, 0x02 /* Public */,
      63,    0,  369,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   45,   46,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   45,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      64, QMetaType::QString, 0x00495003,
      65, QMetaType::QString, 0x00495001,
      66, QMetaType::QString, 0x00495103,
      67, QMetaType::QString, 0x00495001,
      68, QMetaType::QString, 0x00495003,
      69, QMetaType::Int, 0x00495103,
      70, QMetaType::QString, 0x00495001,
      71, QMetaType::QString, 0x00495001,
      72, QMetaType::QString, 0x00495001,
      73, QMetaType::QString, 0x00495001,
      74, QMetaType::QString, 0x00495001,
      75, QMetaType::QString, 0x00495001,
      76, QMetaType::Int, 0x00495003,
      77, QMetaType::Int, 0x00495003,
      78, QMetaType::QString, 0x00495003,
      79, QMetaType::Int, 0x00495001,
      80, QMetaType::Int, 0x00495001,
      81, QMetaType::Int, 0x00495001,
      82, QMetaType::Int, 0x00495001,
      83, QMetaType::Int, 0x00095001,
      84, QMetaType::Int, 0x00495103,
      85, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      22,
      35,
      36,
      37,
      23,
      24,
      25,
      26,
       0,
      28,
      38,

       0        // eod
};

void BackEnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BackEnd *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userNameChanged(); break;
        case 1: _t->RankChanged(); break;
        case 2: _t->pointChanged(); break;
        case 3: _t->HistoryChanged(); break;
        case 4: _t->enemyNameChanged(); break;
        case 5: _t->prizeChanged(); break;
        case 6: _t->questionChanged(); break;
        case 7: _t->aChanged(); break;
        case 8: _t->bChanged(); break;
        case 9: _t->cChanged(); break;
        case 10: _t->dChanged(); break;
        case 11: _t->connectSuccess(); break;
        case 12: _t->connectFail(); break;
        case 13: _t->loginSuccess(); break;
        case 14: _t->loggedIn(); break;
        case 15: _t->accountBlocked(); break;
        case 16: _t->accountNotExist(); break;
        case 17: _t->wrongPassword(); break;
        case 18: _t->signupSuccess(); break;
        case 19: _t->accountExist(); break;
        case 20: _t->changePasswordSuccess(); break;
        case 21: _t->sameOldPassword(); break;
        case 22: _t->callPhoneAnswerChanged(); break;
        case 23: _t->voteAChanged(); break;
        case 24: _t->voteBChanged(); break;
        case 25: _t->voteCChanged(); break;
        case 26: _t->voteDChanged(); break;
        case 27: _t->correctAnswer(); break;
        case 28: _t->rewardChanged(); break;
        case 29: _t->lose(); break;
        case 30: _t->lose2(); break;
        case 31: _t->foundPlayer(); break;
        case 32: _t->openVote(); break;
        case 33: _t->openCallPhone(); break;
        case 34: _t->notFoundPlayer(); break;
        case 35: _t->enemyCurrentQuestionChanged(); break;
        case 36: _t->enemySecondsChanged(); break;
        case 37: _t->enemyStatusChanged(); break;
        case 38: _t->statusGameChanged(); break;
        case 39: _t->showResultPvP(); break;
        case 40: _t->connectToServer(); break;
        case 41: _t->disconnectToServer(); break;
        case 42: _t->signIn((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 43: _t->signUp((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 44: _t->logOut(); break;
        case 45: _t->changePassword((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 46: _t->playAlone(); break;
        case 47: _t->choiceAnswer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 48: _t->fiftyFifty(); break;
        case 49: _t->callPhone(); break;
        case 50: _t->vote(); break;
        case 51: _t->changeQuestion(); break;
        case 52: _t->stopGame(); break;
        case 53: _t->overTime(); break;
        case 54: _t->playPvP(); break;
        case 55: _t->storeHistory(); break;
        case 56: _t->changedPoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::userNameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::RankChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::pointChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::HistoryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::enemyNameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::prizeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::questionChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::aChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::bChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::cChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::dChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::connectSuccess)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::connectFail)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::loginSuccess)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::loggedIn)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::accountBlocked)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::accountNotExist)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::wrongPassword)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::signupSuccess)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::accountExist)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::changePasswordSuccess)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::sameOldPassword)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::callPhoneAnswerChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::voteAChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::voteBChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::voteCChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::voteDChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::correctAnswer)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::rewardChanged)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::lose)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::lose2)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::foundPlayer)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::openVote)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::openCallPhone)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::notFoundPlayer)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::enemyCurrentQuestionChanged)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::enemySecondsChanged)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::enemyStatusChanged)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::statusGameChanged)) {
                *result = 38;
                return;
            }
        }
        {
            using _t = void (BackEnd::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BackEnd::showResultPvP)) {
                *result = 39;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<BackEnd *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getUserName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getRank(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getPoint(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getHistory(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getEnemyName(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getPrize(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getQuestion(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->getA(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getB(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getC(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->getD(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->getCallPhoneAnswer(); break;
        case 12: *reinterpret_cast< int*>(_v) = _t->getEnemyCurrentQuestion(); break;
        case 13: *reinterpret_cast< int*>(_v) = _t->getEnemySeconds(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getEnemyStatus(); break;
        case 15: *reinterpret_cast< int*>(_v) = _t->getVoteA(); break;
        case 16: *reinterpret_cast< int*>(_v) = _t->getVoteB(); break;
        case 17: *reinterpret_cast< int*>(_v) = _t->getVoteC(); break;
        case 18: *reinterpret_cast< int*>(_v) = _t->getVoteD(); break;
        case 19: *reinterpret_cast< int*>(_v) = _t->getCorrectAnswer(); break;
        case 20: *reinterpret_cast< int*>(_v) = _t->getReward(); break;
        case 21: *reinterpret_cast< int*>(_v) = _t->getStatusGame(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<BackEnd *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setPoint(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setEnemyName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPrize(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setEnemyCurrentQuestion(*reinterpret_cast< int*>(_v)); break;
        case 13: _t->setEnemySeconds(*reinterpret_cast< int*>(_v)); break;
        case 14: _t->setEnemyStatus(*reinterpret_cast< QString*>(_v)); break;
        case 20: _t->setReward(*reinterpret_cast< int*>(_v)); break;
        case 21: _t->setStatusGame(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject BackEnd::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BackEnd.data,
    qt_meta_data_BackEnd,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BackEnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BackEnd::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BackEnd.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BackEnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 57)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 57;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 57)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 57;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void BackEnd::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BackEnd::RankChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void BackEnd::pointChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void BackEnd::HistoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void BackEnd::enemyNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BackEnd::prizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BackEnd::questionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void BackEnd::aChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void BackEnd::bChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void BackEnd::cChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void BackEnd::dChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void BackEnd::connectSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void BackEnd::connectFail()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void BackEnd::loginSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void BackEnd::loggedIn()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void BackEnd::accountBlocked()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void BackEnd::accountNotExist()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void BackEnd::wrongPassword()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void BackEnd::signupSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void BackEnd::accountExist()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void BackEnd::changePasswordSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void BackEnd::sameOldPassword()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void BackEnd::callPhoneAnswerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void BackEnd::voteAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void BackEnd::voteBChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void BackEnd::voteCChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void BackEnd::voteDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void BackEnd::correctAnswer()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void BackEnd::rewardChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void BackEnd::lose()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void BackEnd::lose2()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void BackEnd::foundPlayer()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void BackEnd::openVote()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void BackEnd::openCallPhone()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void BackEnd::notFoundPlayer()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void BackEnd::enemyCurrentQuestionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void BackEnd::enemySecondsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void BackEnd::enemyStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 37, nullptr);
}

// SIGNAL 38
void BackEnd::statusGameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 38, nullptr);
}

// SIGNAL 39
void BackEnd::showResultPvP()
{
    QMetaObject::activate(this, &staticMetaObject, 39, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
