/****************************************************************************
** Meta object code from reading C++ file 'itemdialog.h'
**
** Created: Thu 20. Dec 16:45:20 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../itemdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itemdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ItemDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      31,   11,   11,   11, 0x08,
      59,   11,   11,   11, 0x08,
      81,   11,   11,   11, 0x08,
     108,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ItemDialog[] = {
    "ItemDialog\0\0refreshItemTable()\0"
    "on_btnClearFields_clicked()\0"
    "on_btnClose_clicked()\0on_btnDeleteItem_clicked()\0"
    "on_btnAddItem_clicked()\0"
};

void ItemDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ItemDialog *_t = static_cast<ItemDialog *>(_o);
        switch (_id) {
        case 0: _t->refreshItemTable(); break;
        case 1: _t->on_btnClearFields_clicked(); break;
        case 2: _t->on_btnClose_clicked(); break;
        case 3: _t->on_btnDeleteItem_clicked(); break;
        case 4: _t->on_btnAddItem_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ItemDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ItemDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ItemDialog,
      qt_meta_data_ItemDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ItemDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ItemDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ItemDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ItemDialog))
        return static_cast<void*>(const_cast< ItemDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ItemDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
