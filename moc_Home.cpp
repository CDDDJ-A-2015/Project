/****************************************************************************
** Meta object code from reading C++ file 'Home.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Home.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Home[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      23,    5,    5,    5, 0x08,
      37,    5,    5,    5, 0x08,
      63,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Home[] = {
    "Home\0\0clickbProjects()\0clickbUsers()\0"
    "dClickGTable(QModelIndex)\0clickbSearch()\0"
};

void Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Home *_t = static_cast<Home *>(_o);
        switch (_id) {
        case 0: _t->clickbProjects(); break;
        case 1: _t->clickbUsers(); break;
        case 2: _t->dClickGTable((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->clickbSearch(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Home::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Home::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Home,
      qt_meta_data_Home, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Home::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Home::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Home))
        return static_cast<void*>(const_cast< Home*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
