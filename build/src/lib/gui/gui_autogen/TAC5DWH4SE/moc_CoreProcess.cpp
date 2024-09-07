/****************************************************************************
** Meta object code from reading C++ file 'CoreProcess.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/lib/gui/core/CoreProcess.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CoreProcess.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSsynergySCOPEguiSCOPECoreProcessENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSsynergySCOPEguiSCOPECoreProcessENDCLASS = QtMocHelpers::stringData(
    "synergy::gui::CoreProcess",
    "starting",
    "",
    "error",
    "Error",
    "logLine",
    "line",
    "connectionStateChanged",
    "ConnectionState",
    "state",
    "processStateChanged",
    "ProcessState",
    "secureSocket",
    "enabled",
    "onIpcClientServiceReady",
    "onIpcClientRead",
    "text",
    "onIpcClientError",
    "onProcessFinished",
    "exitCode",
    "QProcess::ExitStatus",
    "onProcessReadyReadStandardOutput",
    "onProcessReadyReadStandardError"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSsynergySCOPEguiSCOPECoreProcessENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    1 /* Public */,
       3,    1,   87,    2, 0x06,    2 /* Public */,
       5,    1,   90,    2, 0x06,    4 /* Public */,
       7,    1,   93,    2, 0x06,    6 /* Public */,
      10,    1,   96,    2, 0x06,    8 /* Public */,
      12,    1,   99,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,  102,    2, 0x08,   12 /* Private */,
      15,    1,  103,    2, 0x08,   13 /* Private */,
      17,    1,  106,    2, 0x108,   15 /* Private | MethodIsConst  */,
      18,    2,  109,    2, 0x08,   17 /* Private */,
      21,    0,  114,    2, 0x08,   20 /* Private */,
      22,    0,  115,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,    9,
    QMetaType::Void, QMetaType::Bool,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 20,   19,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject synergy::gui::CoreProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSsynergySCOPEguiSCOPECoreProcessENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSsynergySCOPEguiSCOPECoreProcessENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSsynergySCOPEguiSCOPECoreProcessENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CoreProcess, std::true_type>,
        // method 'starting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Error, std::false_type>,
        // method 'logLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'connectionStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ConnectionState, std::false_type>,
        // method 'processStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ProcessState, std::false_type>,
        // method 'secureSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onIpcClientServiceReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIpcClientRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onIpcClientError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onProcessFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'onProcessReadyReadStandardOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProcessReadyReadStandardError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void synergy::gui::CoreProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CoreProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->starting(); break;
        case 1: _t->error((*reinterpret_cast< std::add_pointer_t<Error>>(_a[1]))); break;
        case 2: _t->logLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->connectionStateChanged((*reinterpret_cast< std::add_pointer_t<ConnectionState>>(_a[1]))); break;
        case 4: _t->processStateChanged((*reinterpret_cast< std::add_pointer_t<ProcessState>>(_a[1]))); break;
        case 5: _t->secureSocket((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->onIpcClientServiceReady(); break;
        case 7: _t->onIpcClientRead((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->onIpcClientError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->onProcessFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 10: _t->onProcessReadyReadStandardOutput(); break;
        case 11: _t->onProcessReadyReadStandardError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CoreProcess::*)();
            if (_t _q_method = &CoreProcess::starting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CoreProcess::*)(Error );
            if (_t _q_method = &CoreProcess::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CoreProcess::*)(const QString & );
            if (_t _q_method = &CoreProcess::logLine; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CoreProcess::*)(ConnectionState );
            if (_t _q_method = &CoreProcess::connectionStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CoreProcess::*)(ProcessState );
            if (_t _q_method = &CoreProcess::processStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CoreProcess::*)(bool );
            if (_t _q_method = &CoreProcess::secureSocket; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *synergy::gui::CoreProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *synergy::gui::CoreProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSsynergySCOPEguiSCOPECoreProcessENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int synergy::gui::CoreProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void synergy::gui::CoreProcess::starting()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void synergy::gui::CoreProcess::error(Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void synergy::gui::CoreProcess::logLine(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void synergy::gui::CoreProcess::connectionStateChanged(ConnectionState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void synergy::gui::CoreProcess::processStateChanged(ProcessState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void synergy::gui::CoreProcess::secureSocket(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
