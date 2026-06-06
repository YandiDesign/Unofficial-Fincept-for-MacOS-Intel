/****************************************************************************
** Meta object code from reading C++ file 'KrakenWsClient.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/trading/exchanges/kraken/KrakenWsClient.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'KrakenWsClient.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7trading6kraken14KrakenWsClientE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7trading6kraken14KrakenWsClientE = QtMocHelpers::stringData(
    "fincept::trading::kraken::KrakenWsClient",
    "ticker_received",
    "",
    "fincept::trading::TickerData",
    "ticker",
    "orderbook_received",
    "fincept::trading::OrderBookData",
    "orderbook",
    "trade_received",
    "fincept::trading::TradeData",
    "trade",
    "candle_received",
    "symbol",
    "interval",
    "fincept::trading::Candle",
    "candle",
    "connection_changed",
    "connected",
    "subscribe_failed",
    "channel",
    "error",
    "on_ws_connected",
    "on_ws_disconnected",
    "on_ws_message",
    "message",
    "on_ws_error",
    "on_heartbeat_timeout"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7trading6kraken14KrakenWsClientE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       5,    1,   83,    2, 0x06,    3 /* Public */,
       8,    1,   86,    2, 0x06,    5 /* Public */,
      11,    3,   89,    2, 0x06,    7 /* Public */,
      16,    1,   96,    2, 0x06,   11 /* Public */,
      18,    3,   99,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      21,    0,  106,    2, 0x08,   17 /* Private */,
      22,    0,  107,    2, 0x08,   18 /* Private */,
      23,    1,  108,    2, 0x08,   19 /* Private */,
      25,    1,  111,    2, 0x08,   21 /* Private */,
      26,    0,  114,    2, 0x08,   23 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 14,   12,   13,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   19,   12,   20,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::trading::kraken::KrakenWsClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7trading6kraken14KrakenWsClientE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7trading6kraken14KrakenWsClientE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7trading6kraken14KrakenWsClientE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KrakenWsClient, std::true_type>,
        // method 'ticker_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::trading::TickerData &, std::false_type>,
        // method 'orderbook_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::trading::OrderBookData &, std::false_type>,
        // method 'trade_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::trading::TradeData &, std::false_type>,
        // method 'candle_received'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const fincept::trading::Candle &, std::false_type>,
        // method 'connection_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'subscribe_failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ws_connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ws_disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ws_message'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ws_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_heartbeat_timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void fincept::trading::kraken::KrakenWsClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KrakenWsClient *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ticker_received((*reinterpret_cast< std::add_pointer_t<fincept::trading::TickerData>>(_a[1]))); break;
        case 1: _t->orderbook_received((*reinterpret_cast< std::add_pointer_t<fincept::trading::OrderBookData>>(_a[1]))); break;
        case 2: _t->trade_received((*reinterpret_cast< std::add_pointer_t<fincept::trading::TradeData>>(_a[1]))); break;
        case 3: _t->candle_received((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<fincept::trading::Candle>>(_a[3]))); break;
        case 4: _t->connection_changed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->subscribe_failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->on_ws_connected(); break;
        case 7: _t->on_ws_disconnected(); break;
        case 8: _t->on_ws_message((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->on_ws_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->on_heartbeat_timeout(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (KrakenWsClient::*)(const fincept::trading::TickerData & );
            if (_q_method_type _q_method = &KrakenWsClient::ticker_received; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (KrakenWsClient::*)(const fincept::trading::OrderBookData & );
            if (_q_method_type _q_method = &KrakenWsClient::orderbook_received; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (KrakenWsClient::*)(const fincept::trading::TradeData & );
            if (_q_method_type _q_method = &KrakenWsClient::trade_received; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (KrakenWsClient::*)(const QString & , const QString & , const fincept::trading::Candle & );
            if (_q_method_type _q_method = &KrakenWsClient::candle_received; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (KrakenWsClient::*)(bool );
            if (_q_method_type _q_method = &KrakenWsClient::connection_changed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (KrakenWsClient::*)(const QString & , const QString & , const QString & );
            if (_q_method_type _q_method = &KrakenWsClient::subscribe_failed; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *fincept::trading::kraken::KrakenWsClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::trading::kraken::KrakenWsClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7trading6kraken14KrakenWsClientE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fincept::trading::kraken::KrakenWsClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void fincept::trading::kraken::KrakenWsClient::ticker_received(const fincept::trading::TickerData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void fincept::trading::kraken::KrakenWsClient::orderbook_received(const fincept::trading::OrderBookData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void fincept::trading::kraken::KrakenWsClient::trade_received(const fincept::trading::TradeData & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void fincept::trading::kraken::KrakenWsClient::candle_received(const QString & _t1, const QString & _t2, const fincept::trading::Candle & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void fincept::trading::kraken::KrakenWsClient::connection_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void fincept::trading::kraken::KrakenWsClient::subscribe_failed(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
