/****************************************************************************
** Meta object code from reading C++ file 'wt901-uart.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/witmotion_ros/witmotion-uart-qt/include/witmotion/wt901-uart.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wt901-uart.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_witmotion__wt901__QWitmotionWT901Sensor_t {
    QByteArrayData data[1];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_witmotion__wt901__QWitmotionWT901Sensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_witmotion__wt901__QWitmotionWT901Sensor_t qt_meta_stringdata_witmotion__wt901__QWitmotionWT901Sensor = {
    {
QT_MOC_LITERAL(0, 0, 39) // "witmotion::wt901::QWitmotionW..."

    },
    "witmotion::wt901::QWitmotionWT901Sensor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_witmotion__wt901__QWitmotionWT901Sensor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void witmotion::wt901::QWitmotionWT901Sensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject witmotion::wt901::QWitmotionWT901Sensor::staticMetaObject = {
    { &QAbstractWitmotionSensorController::staticMetaObject, qt_meta_stringdata_witmotion__wt901__QWitmotionWT901Sensor.data,
      qt_meta_data_witmotion__wt901__QWitmotionWT901Sensor,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *witmotion::wt901::QWitmotionWT901Sensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *witmotion::wt901::QWitmotionWT901Sensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_witmotion__wt901__QWitmotionWT901Sensor.stringdata0))
        return static_cast<void*>(this);
    return QAbstractWitmotionSensorController::qt_metacast(_clname);
}

int witmotion::wt901::QWitmotionWT901Sensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractWitmotionSensorController::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
