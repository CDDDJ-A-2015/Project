/****************************************************************************
** Meta object code from reading C++ file 'Project.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Project.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Project.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Project[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      23,    8,    8,    8, 0x0a,
      36,    8,    8,    8, 0x0a,
      58,    8,    8,    8, 0x0a,
      70,    8,    8,    8, 0x0a,
      83,    8,    8,    8, 0x0a,
      97,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Project[] = {
    "Project\0\0editProject()\0addComment()\0"
    "viewTask(QModelIndex)\0clickbAPN()\0"
    "clickbPert()\0clickbGantt()\0clickbAddTask()\0"
};

void Project::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Project *_t = static_cast<Project *>(_o);
        switch (_id) {
        case 0: _t->editProject(); break;
        case 1: _t->addComment(); break;
        case 2: _t->viewTask((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 3: _t->clickbAPN(); break;
        case 4: _t->clickbPert(); break;
        case 5: _t->clickbGantt(); break;
        case 6: _t->clickbAddTask(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Project::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Project::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Project,
      qt_meta_data_Project, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Project::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Project::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Project::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Project))
        return static_cast<void*>(const_cast< Project*>(this));
    return QWidget::qt_metacast(_clname);
}

int Project::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
