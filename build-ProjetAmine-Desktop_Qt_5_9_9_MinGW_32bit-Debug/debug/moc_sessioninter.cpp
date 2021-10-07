/****************************************************************************
** Meta object code from reading C++ file 'sessioninter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetAmine/sessioninter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sessioninter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sessioninter_t {
    QByteArrayData data[13];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sessioninter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sessioninter_t qt_meta_stringdata_sessioninter = {
    {
QT_MOC_LITERAL(0, 0, 12), // "sessioninter"
QT_MOC_LITERAL(1, 13, 24), // "on_AjouterBouton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 37), // "on_comboBox_modif_currentInde..."
QT_MOC_LITERAL(4, 77, 4), // "arg1"
QT_MOC_LITERAL(5, 82, 25), // "on_ModifierBouton_clicked"
QT_MOC_LITERAL(6, 108, 26), // "on_SupprimerBouton_clicked"
QT_MOC_LITERAL(7, 135, 34), // "on_recherche_cursorPositionCh..."
QT_MOC_LITERAL(8, 170, 4), // "arg2"
QT_MOC_LITERAL(9, 175, 35), // "on_comboBox_Tri_currentIndexC..."
QT_MOC_LITERAL(10, 211, 7), // "refresh"
QT_MOC_LITERAL(11, 219, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(12, 251, 14) // "on_PDF_clicked"

    },
    "sessioninter\0on_AjouterBouton_clicked\0"
    "\0on_comboBox_modif_currentIndexChanged\0"
    "arg1\0on_ModifierBouton_clicked\0"
    "on_SupprimerBouton_clicked\0"
    "on_recherche_cursorPositionChanged\0"
    "arg2\0on_comboBox_Tri_currentIndexChanged\0"
    "refresh\0on_comboBox_currentIndexChanged\0"
    "on_PDF_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sessioninter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    2,   65,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    8,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void sessioninter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sessioninter *_t = static_cast<sessioninter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AjouterBouton_clicked(); break;
        case 1: _t->on_comboBox_modif_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_ModifierBouton_clicked(); break;
        case 3: _t->on_SupprimerBouton_clicked(); break;
        case 4: _t->on_recherche_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->on_comboBox_Tri_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->refresh(); break;
        case 7: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_PDF_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject sessioninter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_sessioninter.data,
      qt_meta_data_sessioninter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *sessioninter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sessioninter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_sessioninter.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int sessioninter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
