/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mynotepad/mainwindow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actionNew_triggered",
    "",
    "updateMenus",
    "createMdiChild",
    "MdiChild*",
    "setActiveSubWindow",
    "QWidget*",
    "window",
    "on_actionOpen_triggered",
    "updateWindowMenu",
    "on_actionSave_triggered",
    "on_actionSaveAs_triggered",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered",
    "on_actionCut_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionVoice_triggered",
    "on_actionClose_triggered",
    "on_actionCloseAll_triggered",
    "on_actionTile_triggered",
    "on_actionCascade_triggered",
    "on_actionNext_triggered",
    "on_actionPrevious_triggered",
    "on_actionAbout_triggered",
    "on_actionAboutQt_triggered",
    "on_actionExit_triggered",
    "showTextRowAndCol",
    "on_pushButton_clicked",
    "on_speedButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[62];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[15];
    char stringdata5[10];
    char stringdata6[19];
    char stringdata7[9];
    char stringdata8[7];
    char stringdata9[24];
    char stringdata10[17];
    char stringdata11[24];
    char stringdata12[26];
    char stringdata13[24];
    char stringdata14[24];
    char stringdata15[23];
    char stringdata16[24];
    char stringdata17[25];
    char stringdata18[25];
    char stringdata19[25];
    char stringdata20[28];
    char stringdata21[24];
    char stringdata22[27];
    char stringdata23[24];
    char stringdata24[28];
    char stringdata25[25];
    char stringdata26[27];
    char stringdata27[24];
    char stringdata28[18];
    char stringdata29[22];
    char stringdata30[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "on_actionNew_triggered"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 11),  // "updateMenus"
        QT_MOC_LITERAL(47, 14),  // "createMdiChild"
        QT_MOC_LITERAL(62, 9),  // "MdiChild*"
        QT_MOC_LITERAL(72, 18),  // "setActiveSubWindow"
        QT_MOC_LITERAL(91, 8),  // "QWidget*"
        QT_MOC_LITERAL(100, 6),  // "window"
        QT_MOC_LITERAL(107, 23),  // "on_actionOpen_triggered"
        QT_MOC_LITERAL(131, 16),  // "updateWindowMenu"
        QT_MOC_LITERAL(148, 23),  // "on_actionSave_triggered"
        QT_MOC_LITERAL(172, 25),  // "on_actionSaveAs_triggered"
        QT_MOC_LITERAL(198, 23),  // "on_actionUndo_triggered"
        QT_MOC_LITERAL(222, 23),  // "on_actionRedo_triggered"
        QT_MOC_LITERAL(246, 22),  // "on_actionCut_triggered"
        QT_MOC_LITERAL(269, 23),  // "on_actionCopy_triggered"
        QT_MOC_LITERAL(293, 24),  // "on_actionPaste_triggered"
        QT_MOC_LITERAL(318, 24),  // "on_actionVoice_triggered"
        QT_MOC_LITERAL(343, 24),  // "on_actionClose_triggered"
        QT_MOC_LITERAL(368, 27),  // "on_actionCloseAll_triggered"
        QT_MOC_LITERAL(396, 23),  // "on_actionTile_triggered"
        QT_MOC_LITERAL(420, 26),  // "on_actionCascade_triggered"
        QT_MOC_LITERAL(447, 23),  // "on_actionNext_triggered"
        QT_MOC_LITERAL(471, 27),  // "on_actionPrevious_triggered"
        QT_MOC_LITERAL(499, 24),  // "on_actionAbout_triggered"
        QT_MOC_LITERAL(524, 26),  // "on_actionAboutQt_triggered"
        QT_MOC_LITERAL(551, 23),  // "on_actionExit_triggered"
        QT_MOC_LITERAL(575, 17),  // "showTextRowAndCol"
        QT_MOC_LITERAL(593, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(615, 22)   // "on_speedButton_clicked"
    },
    "MainWindow",
    "on_actionNew_triggered",
    "",
    "updateMenus",
    "createMdiChild",
    "MdiChild*",
    "setActiveSubWindow",
    "QWidget*",
    "window",
    "on_actionOpen_triggered",
    "updateWindowMenu",
    "on_actionSave_triggered",
    "on_actionSaveAs_triggered",
    "on_actionUndo_triggered",
    "on_actionRedo_triggered",
    "on_actionCut_triggered",
    "on_actionCopy_triggered",
    "on_actionPaste_triggered",
    "on_actionVoice_triggered",
    "on_actionClose_triggered",
    "on_actionCloseAll_triggered",
    "on_actionTile_triggered",
    "on_actionCascade_triggered",
    "on_actionNext_triggered",
    "on_actionPrevious_triggered",
    "on_actionAbout_triggered",
    "on_actionAboutQt_triggered",
    "on_actionExit_triggered",
    "showTextRowAndCol",
    "on_pushButton_clicked",
    "on_speedButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  170,    2, 0x08,    1 /* Private */,
       3,    0,  171,    2, 0x08,    2 /* Private */,
       4,    0,  172,    2, 0x08,    3 /* Private */,
       6,    1,  173,    2, 0x08,    4 /* Private */,
       9,    0,  176,    2, 0x08,    6 /* Private */,
      10,    0,  177,    2, 0x08,    7 /* Private */,
      11,    0,  178,    2, 0x08,    8 /* Private */,
      12,    0,  179,    2, 0x08,    9 /* Private */,
      13,    0,  180,    2, 0x08,   10 /* Private */,
      14,    0,  181,    2, 0x08,   11 /* Private */,
      15,    0,  182,    2, 0x08,   12 /* Private */,
      16,    0,  183,    2, 0x08,   13 /* Private */,
      17,    0,  184,    2, 0x08,   14 /* Private */,
      18,    0,  185,    2, 0x08,   15 /* Private */,
      19,    0,  186,    2, 0x08,   16 /* Private */,
      20,    0,  187,    2, 0x08,   17 /* Private */,
      21,    0,  188,    2, 0x08,   18 /* Private */,
      22,    0,  189,    2, 0x08,   19 /* Private */,
      23,    0,  190,    2, 0x08,   20 /* Private */,
      24,    0,  191,    2, 0x08,   21 /* Private */,
      25,    0,  192,    2, 0x08,   22 /* Private */,
      26,    0,  193,    2, 0x08,   23 /* Private */,
      27,    0,  194,    2, 0x08,   24 /* Private */,
      28,    0,  195,    2, 0x08,   25 /* Private */,
      29,    0,  196,    2, 0x08,   26 /* Private */,
      30,    0,  197,    2, 0x08,   27 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    QMetaType::Void, 0x80000000 | 7,    8,
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

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actionNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMenus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createMdiChild'
        QtPrivate::TypeAndForceComplete<MdiChild *, std::false_type>,
        // method 'setActiveSubWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'on_actionOpen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateWindowMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSave_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSaveAs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopy_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPaste_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionVoice_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClose_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCloseAll_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionTile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCascade_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNext_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPrevious_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAboutQt_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showTextRowAndCol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_speedButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->updateMenus(); break;
        case 2: { MdiChild* _r = _t->createMdiChild();
            if (_a[0]) *reinterpret_cast< MdiChild**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setActiveSubWindow((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 4: _t->on_actionOpen_triggered(); break;
        case 5: _t->updateWindowMenu(); break;
        case 6: _t->on_actionSave_triggered(); break;
        case 7: _t->on_actionSaveAs_triggered(); break;
        case 8: _t->on_actionUndo_triggered(); break;
        case 9: _t->on_actionRedo_triggered(); break;
        case 10: _t->on_actionCut_triggered(); break;
        case 11: _t->on_actionCopy_triggered(); break;
        case 12: _t->on_actionPaste_triggered(); break;
        case 13: _t->on_actionVoice_triggered(); break;
        case 14: _t->on_actionClose_triggered(); break;
        case 15: _t->on_actionCloseAll_triggered(); break;
        case 16: _t->on_actionTile_triggered(); break;
        case 17: _t->on_actionCascade_triggered(); break;
        case 18: _t->on_actionNext_triggered(); break;
        case 19: _t->on_actionPrevious_triggered(); break;
        case 20: _t->on_actionAbout_triggered(); break;
        case 21: _t->on_actionAboutQt_triggered(); break;
        case 22: _t->on_actionExit_triggered(); break;
        case 23: _t->showTextRowAndCol(); break;
        case 24: _t->on_pushButton_clicked(); break;
        case 25: _t->on_speedButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_WARNING_POP
