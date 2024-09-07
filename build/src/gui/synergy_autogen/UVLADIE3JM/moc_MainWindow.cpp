/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/src/MainWindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "created",
    "",
    "shown",
    "onAppAboutToQuit",
    "onCreated",
    "onShown",
    "onConfigScopesSaving",
    "onAppConfigTlsChanged",
    "onAppConfigScreenNameChanged",
    "onAppConfigInvertConnection",
    "onCoreProcessStarting",
    "onCoreProcessError",
    "CoreProcess::Error",
    "error",
    "onCoreConnectionStateChanged",
    "CoreProcess::ConnectionState",
    "state",
    "onCoreProcessStateChanged",
    "CoreProcess::ProcessState",
    "onCoreProcessSecureSocket",
    "enabled",
    "onLicenseHandlerSerialKeyChanged",
    "serialKey",
    "onLicenseHandlerInvalidLicense",
    "onVersionCheckerUpdateFound",
    "version",
    "onTrayIconActivated",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "onWindowSaveTimerTimeout",
    "onServerConnectionConfigureClient",
    "clientName",
    "on_m_pButtonApply_clicked",
    "on_m_pLabelComputerName_linkActivated",
    "link",
    "on_m_pLabelFingerprint_linkActivated",
    "on_m_pButtonConnect_clicked",
    "on_m_pButtonConnectToClient_clicked",
    "on_m_pRadioGroupServer_clicked",
    "on_m_pRadioGroupClient_clicked",
    "on_m_pButtonConfigureServer_clicked",
    "on_m_pActionSave_triggered",
    "on_m_pActionAbout_triggered",
    "on_m_pActionHelp_triggered",
    "on_m_pActionSettings_triggered",
    "on_m_pActionActivate_triggered",
    "on_m_pActionStartCore_triggered",
    "on_m_pActionStopCore_triggered",
    "on_m_pActionTestFatalError_triggered",
    "on_m_pActionTestCriticalError_triggered",
    "on_m_pActionClearSettings_triggered",
    "on_m_pLineEditHostname_returnPressed",
    "on_m_pLineEditClientIp_returnPressed",
    "on_m_pLineEditHostname_textChanged",
    "text",
    "on_m_pLineEditClientIp_textChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  266,    2, 0x06,    1 /* Public */,
       3,    0,  267,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  268,    2, 0x0a,    3 /* Public */,
       5,    0,  269,    2, 0x08,    4 /* Private */,
       6,    0,  270,    2, 0x08,    5 /* Private */,
       7,    0,  271,    2, 0x08,    6 /* Private */,
       8,    0,  272,    2, 0x08,    7 /* Private */,
       9,    0,  273,    2, 0x08,    8 /* Private */,
      10,    0,  274,    2, 0x08,    9 /* Private */,
      11,    0,  275,    2, 0x08,   10 /* Private */,
      12,    1,  276,    2, 0x08,   11 /* Private */,
      15,    1,  279,    2, 0x08,   13 /* Private */,
      18,    1,  282,    2, 0x08,   15 /* Private */,
      20,    1,  285,    2, 0x08,   17 /* Private */,
      22,    1,  288,    2, 0x08,   19 /* Private */,
      24,    0,  291,    2, 0x08,   21 /* Private */,
      25,    1,  292,    2, 0x08,   22 /* Private */,
      27,    1,  295,    2, 0x08,   24 /* Private */,
      30,    0,  298,    2, 0x08,   26 /* Private */,
      31,    1,  299,    2, 0x08,   27 /* Private */,
      33,    0,  302,    2, 0x08,   29 /* Private */,
      34,    1,  303,    2, 0x08,   30 /* Private */,
      36,    1,  306,    2, 0x08,   32 /* Private */,
      37,    0,  309,    2, 0x08,   34 /* Private */,
      38,    0,  310,    2, 0x08,   35 /* Private */,
      39,    1,  311,    2, 0x08,   36 /* Private */,
      40,    1,  314,    2, 0x08,   38 /* Private */,
      41,    0,  317,    2, 0x08,   40 /* Private */,
      42,    0,  318,    2, 0x08,   41 /* Private */,
      43,    0,  319,    2, 0x08,   42 /* Private */,
      44,    0,  320,    2, 0x108,   43 /* Private | MethodIsConst  */,
      45,    0,  321,    2, 0x08,   44 /* Private */,
      46,    0,  322,    2, 0x08,   45 /* Private */,
      47,    0,  323,    2, 0x08,   46 /* Private */,
      48,    0,  324,    2, 0x08,   47 /* Private */,
      49,    0,  325,    2, 0x108,   48 /* Private | MethodIsConst  */,
      50,    0,  326,    2, 0x108,   49 /* Private | MethodIsConst  */,
      51,    0,  327,    2, 0x08,   50 /* Private */,
      52,    0,  328,    2, 0x08,   51 /* Private */,
      53,    0,  329,    2, 0x08,   52 /* Private */,
      54,    1,  330,    2, 0x08,   53 /* Private */,
      56,    1,  333,    2, 0x08,   55 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   17,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void, QMetaType::QString,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Bool,
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
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   55,

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
        // method 'created'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAppAboutToQuit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onShown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConfigScopesSaving'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAppConfigTlsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAppConfigScreenNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAppConfigInvertConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCoreProcessStarting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCoreProcessError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CoreProcess::Error, std::false_type>,
        // method 'onCoreConnectionStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CoreProcess::ConnectionState, std::false_type>,
        // method 'onCoreProcessStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CoreProcess::ProcessState, std::false_type>,
        // method 'onCoreProcessSecureSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onLicenseHandlerSerialKeyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onLicenseHandlerInvalidLicense'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVersionCheckerUpdateFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onTrayIconActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'onWindowSaveTimerTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerConnectionConfigureClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_m_pButtonApply_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pLabelComputerName_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_m_pLabelFingerprint_linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_m_pButtonConnect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pButtonConnectToClient_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pRadioGroupServer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_m_pRadioGroupClient_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_m_pButtonConfigureServer_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionSave_triggered'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_m_pActionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionHelp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionSettings_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionActivate_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionStartCore_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionStopCore_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionTestFatalError_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionTestCriticalError_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pActionClearSettings_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pLineEditHostname_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pLineEditClientIp_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pLineEditHostname_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_m_pLineEditClientIp_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->created(); break;
        case 1: _t->shown(); break;
        case 2: _t->onAppAboutToQuit(); break;
        case 3: _t->onCreated(); break;
        case 4: _t->onShown(); break;
        case 5: _t->onConfigScopesSaving(); break;
        case 6: _t->onAppConfigTlsChanged(); break;
        case 7: _t->onAppConfigScreenNameChanged(); break;
        case 8: _t->onAppConfigInvertConnection(); break;
        case 9: _t->onCoreProcessStarting(); break;
        case 10: _t->onCoreProcessError((*reinterpret_cast< std::add_pointer_t<CoreProcess::Error>>(_a[1]))); break;
        case 11: _t->onCoreConnectionStateChanged((*reinterpret_cast< std::add_pointer_t<CoreProcess::ConnectionState>>(_a[1]))); break;
        case 12: _t->onCoreProcessStateChanged((*reinterpret_cast< std::add_pointer_t<CoreProcess::ProcessState>>(_a[1]))); break;
        case 13: _t->onCoreProcessSecureSocket((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->onLicenseHandlerSerialKeyChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->onLicenseHandlerInvalidLicense(); break;
        case 16: _t->onVersionCheckerUpdateFound((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->onTrayIconActivated((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 18: _t->onWindowSaveTimerTimeout(); break;
        case 19: _t->onServerConnectionConfigureClient((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->on_m_pButtonApply_clicked(); break;
        case 21: _t->on_m_pLabelComputerName_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->on_m_pLabelFingerprint_linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->on_m_pButtonConnect_clicked(); break;
        case 24: _t->on_m_pButtonConnectToClient_clicked(); break;
        case 25: _t->on_m_pRadioGroupServer_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->on_m_pRadioGroupClient_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->on_m_pButtonConfigureServer_clicked(); break;
        case 28: { bool _r = _t->on_m_pActionSave_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->on_m_pActionAbout_triggered(); break;
        case 30: _t->on_m_pActionHelp_triggered(); break;
        case 31: _t->on_m_pActionSettings_triggered(); break;
        case 32: _t->on_m_pActionActivate_triggered(); break;
        case 33: _t->on_m_pActionStartCore_triggered(); break;
        case 34: _t->on_m_pActionStopCore_triggered(); break;
        case 35: _t->on_m_pActionTestFatalError_triggered(); break;
        case 36: _t->on_m_pActionTestCriticalError_triggered(); break;
        case 37: _t->on_m_pActionClearSettings_triggered(); break;
        case 38: _t->on_m_pLineEditHostname_returnPressed(); break;
        case 39: _t->on_m_pLineEditClientIp_returnPressed(); break;
        case 40: _t->on_m_pLineEditHostname_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 41: _t->on_m_pLineEditClientIp_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::created; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::shown; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
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
    if (!strcmp(_clname, "Ui::MainWindowBase"))
        return static_cast< Ui::MainWindowBase*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::created()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::shown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
