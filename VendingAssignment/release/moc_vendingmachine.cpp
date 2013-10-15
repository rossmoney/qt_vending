/****************************************************************************
** Meta object code from reading C++ file 'vendingmachine.h'
**
** Created: Thu 20. Dec 16:45:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../vendingmachine.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vendingmachine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VendingMachine[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      37,   15,   15,   15, 0x08,
      60,   58,   15,   15, 0x08,
      89,   15,   15,   15, 0x08,
     107,   15,   15,   15, 0x08,
     125,   15,   15,   15, 0x08,
     143,   15,   15,   15, 0x08,
     161,   15,   15,   15, 0x08,
     179,   15,   15,   15, 0x08,
     197,   15,   15,   15, 0x08,
     215,   15,   15,   15, 0x08,
     233,   15,   15,   15, 0x08,
     251,   15,   15,   15, 0x08,
     269,   15,   15,   15, 0x08,
     287,   15,   15,   15, 0x08,
     305,   15,   15,   15, 0x08,
     323,   15,   15,   15, 0x08,
     341,   15,   15,   15, 0x08,
     359,   15,   15,   15, 0x08,
     377,   15,   15,   15, 0x08,
     403,   15,   15,   15, 0x08,
     426,   15,   15,   15, 0x08,
     450,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_VendingMachine[] = {
    "VendingMachine\0\0resetLetterButtons()\0"
    "resetNumberButtons()\0,\0"
    "processItemCode(QString,int)\0"
    "on_btnA_clicked()\0on_btnB_clicked()\0"
    "on_btnC_clicked()\0on_btnD_clicked()\0"
    "on_btnE_clicked()\0on_btnF_clicked()\0"
    "on_btnG_clicked()\0on_btnH_clicked()\0"
    "on_btn1_clicked()\0on_btn2_clicked()\0"
    "on_btn3_clicked()\0on_btn4_clicked()\0"
    "on_btn5_clicked()\0on_btn6_clicked()\0"
    "on_btn7_clicked()\0on_btn8_clicked()\0"
    "on_btnEditItems_clicked()\0"
    "on_btnCancel_clicked()\0on_btnAddCoin_clicked()\0"
    "on_btnExitApp_clicked()\0"
};

void VendingMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        VendingMachine *_t = static_cast<VendingMachine *>(_o);
        switch (_id) {
        case 0: _t->resetLetterButtons(); break;
        case 1: _t->resetNumberButtons(); break;
        case 2: _t->processItemCode((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_btnA_clicked(); break;
        case 4: _t->on_btnB_clicked(); break;
        case 5: _t->on_btnC_clicked(); break;
        case 6: _t->on_btnD_clicked(); break;
        case 7: _t->on_btnE_clicked(); break;
        case 8: _t->on_btnF_clicked(); break;
        case 9: _t->on_btnG_clicked(); break;
        case 10: _t->on_btnH_clicked(); break;
        case 11: _t->on_btn1_clicked(); break;
        case 12: _t->on_btn2_clicked(); break;
        case 13: _t->on_btn3_clicked(); break;
        case 14: _t->on_btn4_clicked(); break;
        case 15: _t->on_btn5_clicked(); break;
        case 16: _t->on_btn6_clicked(); break;
        case 17: _t->on_btn7_clicked(); break;
        case 18: _t->on_btn8_clicked(); break;
        case 19: _t->on_btnEditItems_clicked(); break;
        case 20: _t->on_btnCancel_clicked(); break;
        case 21: _t->on_btnAddCoin_clicked(); break;
        case 22: _t->on_btnExitApp_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData VendingMachine::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject VendingMachine::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VendingMachine,
      qt_meta_data_VendingMachine, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VendingMachine::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VendingMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VendingMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VendingMachine))
        return static_cast<void*>(const_cast< VendingMachine*>(this));
    return QWidget::qt_metacast(_clname);
}

int VendingMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
