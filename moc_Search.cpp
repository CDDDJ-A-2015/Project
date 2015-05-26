/****************************************************************************
** Meta object code from reading C++ file 'Search.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Search.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Search.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Search[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x0a,
      23,    7,    7,    7, 0x0a,
      40,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Search[] = {
    "Search\0\0searchResult()\0searchProjects()\0"
    "searchUsers()\0"
};

void Search::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Search *_t = static_cast<Search *>(_o);
        switch (_id) {
        case 0: _t->searchResult(); break;
        case 1: _t->searchProjects(); break;
        case 2: _t->searchUsers(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Search::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Search::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Search,
      qt_meta_data_Search, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Search::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Search::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Search::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Search))
        return static_cast<void*>(const_cast< Search*>(this));
    return QWidget::qt_metacast(_clname);
}

int Search::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
