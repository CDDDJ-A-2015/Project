/****************************************************************************
** Meta object code from reading C++ file 'EditProject.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "EditProject.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditProject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditProject[] = {

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
      13,   12,   12,   12, 0x0a,
      25,   12,   12,   12, 0x0a,
      39,   12,   12,   12, 0x0a,
      50,   12,   12,   12, 0x0a,
      61,   12,   12,   12, 0x0a,
      72,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EditProject[] = {
    "EditProject\0\0clickSave()\0clickCancel()\0"
    "clickbC1()\0clickbC2()\0clickbFP()\0"
    "clickbChooseManager()\0"
};

void EditProject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EditProject *_t = static_cast<EditProject *>(_o);
        switch (_id) {
        case 0: _t->clickSave(); break;
        case 1: _t->clickCancel(); break;
        case 2: _t->clickbC1(); break;
        case 3: _t->clickbC2(); break;
        case 4: _t->clickbFP(); break;
        case 5: _t->clickbChooseManager(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData EditProject::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EditProject::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditProject,
      qt_meta_data_EditProject, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditProject::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditProject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditProject::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditProject))
        return static_cast<void*>(const_cast< EditProject*>(this));
    return QWidget::qt_metacast(_clname);
}

int EditProject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
