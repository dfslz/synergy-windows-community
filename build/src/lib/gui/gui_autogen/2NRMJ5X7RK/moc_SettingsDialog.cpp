/****************************************************************************
** Meta object code from reading C++ file 'SettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/lib/gui/dialogs/SettingsDialog.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSettingsDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSettingsDialogENDCLASS = QtMocHelpers::stringData(
    "SettingsDialog",
    "shown",
    "",
    "on_m_pCheckBoxEnableTls_clicked",
    "checked",
    "on_m_pCheckBoxLogToFile_stateChanged",
    "on_m_pButtonBrowseLog_clicked",
    "on_m_pRadioSystemScope_toggled",
    "on_m_pPushButtonTlsCertPath_clicked",
    "on_m_pComboBoxTlsKeyLength_currentIndexChanged",
    "index",
    "on_m_pPushButtonTlsRegenCert_clicked",
    "on_m_pCheckBoxServiceEnabled_toggled"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSettingsDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   69,    2, 0x08,    2 /* Private */,
       5,    1,   72,    2, 0x08,    4 /* Private */,
       6,    0,   75,    2, 0x08,    6 /* Private */,
       7,    1,   76,    2, 0x08,    7 /* Private */,
       8,    0,   79,    2, 0x08,    9 /* Private */,
       9,    1,   80,    2, 0x08,   10 /* Private */,
      11,    0,   83,    2, 0x08,   12 /* Private */,
      12,    1,   84,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject SettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSSettingsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSettingsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSettingsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SettingsDialog, std::true_type>,
        // method 'shown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pCheckBoxEnableTls_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_m_pCheckBoxLogToFile_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_m_pButtonBrowseLog_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pRadioSystemScope_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_m_pPushButtonTlsCertPath_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pComboBoxTlsKeyLength_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_m_pPushButtonTlsRegenCert_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_m_pCheckBoxServiceEnabled_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shown(); break;
        case 1: _t->on_m_pCheckBoxEnableTls_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->on_m_pCheckBoxLogToFile_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_m_pButtonBrowseLog_clicked(); break;
        case 4: _t->on_m_pRadioSystemScope_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->on_m_pPushButtonTlsCertPath_clicked(); break;
        case 6: _t->on_m_pComboBoxTlsKeyLength_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_m_pPushButtonTlsRegenCert_clicked(); break;
        case 8: _t->on_m_pCheckBoxServiceEnabled_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsDialog::*)();
            if (_t _q_method = &SettingsDialog::shown; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSettingsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::SettingsDialogBase"))
        return static_cast< Ui::SettingsDialogBase*>(this);
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SettingsDialog::shown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
