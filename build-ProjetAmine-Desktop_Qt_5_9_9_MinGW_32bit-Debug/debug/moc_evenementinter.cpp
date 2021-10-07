/****************************************************************************
** Meta object code from reading C++ file 'evenementinter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ProjetAmine/evenementinter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'evenementinter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EvenementInter_t {
    QByteArrayData data[16];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EvenementInter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EvenementInter_t qt_meta_stringdata_EvenementInter = {
    {
QT_MOC_LITERAL(0, 0, 14), // "EvenementInter"
QT_MOC_LITERAL(1, 15, 24), // "on_AjouterBouton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 26), // "on_SupprimerBouton_clicked"
QT_MOC_LITERAL(4, 68, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(5, 100, 4), // "arg1"
QT_MOC_LITERAL(6, 105, 25), // "on_ModifierBouton_clicked"
QT_MOC_LITERAL(7, 131, 37), // "on_comboBox_modif_currentInde..."
QT_MOC_LITERAL(8, 169, 7), // "refresh"
QT_MOC_LITERAL(9, 177, 35), // "on_comboBox_Tri_currentIndexC..."
QT_MOC_LITERAL(10, 213, 34), // "on_recherche_cursorPositionCh..."
QT_MOC_LITERAL(11, 248, 4), // "arg2"
QT_MOC_LITERAL(12, 253, 8), // "sendMail"
QT_MOC_LITERAL(13, 262, 8), // "mailSent"
QT_MOC_LITERAL(14, 271, 39), // "on_recherche_desc_cursorPosit..."
QT_MOC_LITERAL(15, 311, 38) // "on_recherche_emp_cursorPositi..."

    },
    "EvenementInter\0on_AjouterBouton_clicked\0"
    "\0on_SupprimerBouton_clicked\0"
    "on_comboBox_currentIndexChanged\0arg1\0"
    "on_ModifierBouton_clicked\0"
    "on_comboBox_modif_currentIndexChanged\0"
    "refresh\0on_comboBox_Tri_currentIndexChanged\0"
    "on_recherche_cursorPositionChanged\0"
    "arg2\0sendMail\0mailSent\0"
    "on_recherche_desc_cursorPositionChanged\0"
    "on_recherche_emp_cursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EvenementInter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    1,   80,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    1,   84,    2, 0x08 /* Private */,
      10,    2,   87,    2, 0x08 /* Private */,
      12,    0,   92,    2, 0x08 /* Private */,
      13,    1,   93,    2, 0x08 /* Private */,
      14,    2,   96,    2, 0x08 /* Private */,
      15,    2,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,   11,

       0        // eod
};

void EvenementInter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EvenementInter *_t = static_cast<EvenementInter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_AjouterBouton_clicked(); break;
        case 1: _t->on_SupprimerBouton_clicked(); break;
        case 2: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_ModifierBouton_clicked(); break;
        case 4: _t->on_comboBox_modif_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->refresh(); break;
        case 6: _t->on_comboBox_Tri_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_recherche_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->sendMail(); break;
        case 9: _t->mailSent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_recherche_desc_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->on_recherche_emp_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject EvenementInter::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EvenementInter.data,
      qt_meta_data_EvenementInter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EvenementInter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EvenementInter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EvenementInter.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EvenementInter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
