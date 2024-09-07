/****************************************************************************
** Meta object code from reading C++ file 'QIpcClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/lib/gui/ipc/QIpcClient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QIpcClient.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQIpcClientENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQIpcClientENDCLASS = QtMocHelpers::stringData(
    "QIpcClient",
    "onRetryConnect",
    "",
    "onSocketConnected",
    "onIpcReaderHelloBack",
    "onSocketError",
    "QAbstractSocket::SocketError",
    "error",
    "onIpcReaderRead",
    "text"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQIpcClientENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x108,    2 /* Private | MethodIsConst  */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x08,    4 /* Private */,
       8,    1,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject QIpcClient::staticMetaObject = { {
    QMetaObject::SuperData::link<synergy::gui::ipc::IQIpcClient::staticMetaObject>(),
    qt_meta_stringdata_CLASSQIpcClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQIpcClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQIpcClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QIpcClient, std::true_type>,
        // method 'onRetryConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocketConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onIpcReaderHelloBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSocketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'onIpcReaderRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void QIpcClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QIpcClient *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onRetryConnect(); break;
        case 1: _t->onSocketConnected(); break;
        case 2: _t->onIpcReaderHelloBack(); break;
        case 3: _t->onSocketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 4: _t->onIpcReaderRead((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *QIpcClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIpcClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQIpcClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return synergy::gui::ipc::IQIpcClient::qt_metacast(_clname);
}

int QIpcClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = synergy::gui::ipc::IQIpcClient::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
