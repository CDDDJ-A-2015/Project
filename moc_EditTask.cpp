/****************************************************************************
** Meta object code from reading C++ file 'EditTask.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EditTask.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditTask.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditTask[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      29,    9,    9,    9, 0x0a,
      50,    9,    9,    9, 0x0a,
      73,    9,    9,    9, 0x0a,
      94,    9,    9,    9, 0x0a,
     113,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditTask[] = {
    "EditTask\0\0clickbDeleteTask()\0"
    "changeDueDate(QDate)\0changeStartDate(QDate)\0"
    "changesProgress(int)\0changesLength(int)\0"
    "changecStatus(int)\0"
};

void EditTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditTask *_t = static_cast<EditTask *>(_o);
        switch (_id) {
        case 0: _t->clickbDeleteTask(); break;
        case 1: _t->changeDueDate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 2: _t->changeStartDate((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        case 3: _t->changesProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changesLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->changecStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EditTask::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditTask::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_EditTask,
      qt_meta_data_EditTask, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditTask::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditTask::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditTask))
        return static_cast<void*>(const_cast< EditTask*>(this));
    return QDialog::qt_metacast(_clname);
}

int EditTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
