/****************************************************************************
** Meta object code from reading C++ file 'AlgoTradingService.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/services/algo_trading/AlgoTradingService.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AlgoTradingService.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7fincept8services4algo18AlgoTradingServiceE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept8services4algo18AlgoTradingServiceE = QtMocHelpers::stringData(
    "fincept::services::algo::AlgoTradingService",
    "strategy_saved",
    "",
    "id",
    "strategies_loaded",
    "QList<fincept::services::algo::AlgoStrategy>",
    "strategies",
    "strategy_deleted",
    "deployment_started",
    "deployment_id",
    "deployments_loaded",
    "QList<fincept::services::algo::AlgoDeployment>",
    "deployments",
    "deployment_stopped",
    "backtest_result",
    "data",
    "scan_result",
    "error_occurred",
    "context",
    "message"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept8services4algo18AlgoTradingServiceE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    1,   71,    2, 0x06,    3 /* Public */,
       7,    1,   74,    2, 0x06,    5 /* Public */,
       8,    1,   77,    2, 0x06,    7 /* Public */,
      10,    1,   80,    2, 0x06,    9 /* Public */,
      13,    1,   83,    2, 0x06,   11 /* Public */,
      14,    1,   86,    2, 0x06,   13 /* Public */,
      16,    1,   89,    2, 0x06,   15 /* Public */,
      17,    2,   92,    2, 0x06,   17 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QJsonObject,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   18,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::services::algo::AlgoTradingService::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept8services4algo18AlgoTradingServiceE.offsetsAndSizes,
    qt_meta_data_ZN7fincept8services4algo18AlgoTradingServiceE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept8services4algo18AlgoTradingServiceE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AlgoTradingService, std::true_type>,
        // method 'strategy_saved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'strategies_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<fincept::services::algo::AlgoStrategy>, std::false_type>,
        // method 'strategy_deleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deployment_started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'deployments_loaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<fincept::services::algo::AlgoDeployment>, std::false_type>,
        // method 'deployment_stopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'backtest_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'scan_result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonObject, std::false_type>,
        // method 'error_occurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void fincept::services::algo::AlgoTradingService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AlgoTradingService *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->strategy_saved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->strategies_loaded((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::algo::AlgoStrategy>>>(_a[1]))); break;
        case 2: _t->strategy_deleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->deployment_started((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->deployments_loaded((*reinterpret_cast< std::add_pointer_t<QList<fincept::services::algo::AlgoDeployment>>>(_a[1]))); break;
        case 5: _t->deployment_stopped((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->backtest_result((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 7: _t->scan_result((*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[1]))); break;
        case 8: _t->error_occurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (AlgoTradingService::*)(QString );
            if (_q_method_type _q_method = &AlgoTradingService::strategy_saved; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QVector<fincept::services::algo::AlgoStrategy> );
            if (_q_method_type _q_method = &AlgoTradingService::strategies_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QString );
            if (_q_method_type _q_method = &AlgoTradingService::strategy_deleted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QString );
            if (_q_method_type _q_method = &AlgoTradingService::deployment_started; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QVector<fincept::services::algo::AlgoDeployment> );
            if (_q_method_type _q_method = &AlgoTradingService::deployments_loaded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QString );
            if (_q_method_type _q_method = &AlgoTradingService::deployment_stopped; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QJsonObject );
            if (_q_method_type _q_method = &AlgoTradingService::backtest_result; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QJsonObject );
            if (_q_method_type _q_method = &AlgoTradingService::scan_result; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (AlgoTradingService::*)(QString , QString );
            if (_q_method_type _q_method = &AlgoTradingService::error_occurred; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *fincept::services::algo::AlgoTradingService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::services::algo::AlgoTradingService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept8services4algo18AlgoTradingServiceE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::services::algo::AlgoTradingService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void fincept::services::algo::AlgoTradingService::strategy_saved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::services::algo::AlgoTradingService::strategies_loaded(QVector<fincept::services::algo::AlgoStrategy> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::services::algo::AlgoTradingService::strategy_deleted(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::services::algo::AlgoTradingService::deployment_started(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::services::algo::AlgoTradingService::deployments_loaded(QVector<fincept::services::algo::AlgoDeployment> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::services::algo::AlgoTradingService::deployment_stopped(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void fincept::services::algo::AlgoTradingService::backtest_result(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void fincept::services::algo::AlgoTradingService::scan_result(QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void fincept::services::algo::AlgoTradingService::error_occurred(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
