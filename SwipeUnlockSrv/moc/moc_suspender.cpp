/****************************************************************************
** Meta object code from reading C++ file 'suspender.h'
**
** Created: Tue 25. Dec 20:38:04 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../suspender.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'suspender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Suspender[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   11,   10,   10, 0x05,
      26,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   37,   10,   10, 0x0a,
      56,   10,   10,   10, 0x0a,
      72,   68,   10,   10, 0x0a,
      95,   10,   10,   10, 0x0a,
     102,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Suspender[] = {
    "Suspender\0\0id\0sendId(int)\0maySleep()\0"
    "aShow\0Suspend(int)\0unSuspend()\0app\0"
    "setupQML(Application*)\0Tick()\0"
    "setNotSleep()\0"
};

const QMetaObject Suspender::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Suspender,
      qt_meta_data_Suspender, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Suspender::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Suspender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Suspender::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Suspender))
        return static_cast<void*>(const_cast< Suspender*>(this));
    return QObject::qt_metacast(_clname);
}

int Suspender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendId((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: maySleep(); break;
        case 2: Suspend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: unSuspend(); break;
        case 4: setupQML((*reinterpret_cast< Application*(*)>(_a[1]))); break;
        case 5: Tick(); break;
        case 6: setNotSleep(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Suspender::sendId(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Suspender::maySleep()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
