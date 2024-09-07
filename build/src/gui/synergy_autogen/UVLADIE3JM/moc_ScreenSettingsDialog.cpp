/****************************************************************************
** Meta object code from reading C++ file 'ScreenSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/src/ScreenSettingsDialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenSettingsDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSScreenSettingsDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSScreenSettingsDialogENDCLASS = QtMocHelpers::stringData(
    "ScreenSettingsDialog",
    "accept",
    "",
    "on_m_pButtonAddAlias_clicked",
    "on_m_pButtonRemoveAlias_clicked",
    "on_m_pLineEditAlias_textChanged",
    "text",
    "on_m_pListAliases_itemSelectionChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScreenSettingsDialogENDCLASS[] = {

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
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x08,    4 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScreenSettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSScreenSettingsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScreenSettingsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScreenSettingsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScreenSettingsDialog, std::true_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pButtonAddAlias_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pButtonRemoveAlias_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pLineEditAlias_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_m_pListAliases_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ScreenSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenSettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->on_m_pButtonAddAlias_clicked(); break;
        case 2: _t->on_m_pButtonRemoveAlias_clicked(); break;
        case 3: _t->on_m_pLineEditAlias_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->on_m_pListAliases_itemSelectionChanged(); break;
        default: ;
        }
    }
}

const QMetaObject *ScreenSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScreenSettingsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::ScreenSettingsDialogBase"))
        return static_cast< Ui::ScreenSettingsDialogBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int ScreenSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
