/****************************************************************************
** Meta object code from reading C++ file 'EquityTradingScreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/screens/equity_trading/EquityTradingScreen.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EquityTradingScreen.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7fincept7screens19EquityTradingScreenE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7fincept7screens19EquityTradingScreenE = QtMocHelpers::stringData(
    "fincept::screens::EquityTradingScreen",
    "on_account_changed",
    "",
    "account_id",
    "on_symbol_selected",
    "symbol",
    "on_mode_toggled",
    "on_accounts_clicked",
    "handle_token_expired",
    "on_order_submitted",
    "trading::UnifiedOrder",
    "order",
    "on_cancel_order",
    "order_id",
    "on_ob_price_clicked",
    "price",
    "on_import_holdings_requested",
    "QList<trading::BrokerHolding>",
    "holdings",
    "refresh_candles",
    "update_clock",
    "on_stream_quote_updated",
    "trading::BrokerQuote",
    "quote",
    "on_stream_watchlist_updated",
    "QList<trading::BrokerQuote>",
    "quotes",
    "on_stream_positions_updated",
    "QList<trading::BrokerPosition>",
    "positions",
    "on_stream_holdings_updated",
    "on_stream_orders_updated",
    "QList<trading::BrokerOrderInfo>",
    "orders",
    "on_stream_funds_updated",
    "trading::BrokerFunds",
    "funds",
    "on_stream_candles_fetched",
    "QList<trading::BrokerCandle>",
    "candles",
    "on_stream_orderbook_fetched",
    "QList<std::pair<double,double>>",
    "bids",
    "asks",
    "spread",
    "spread_pct",
    "on_stream_time_sales_fetched",
    "QList<trading::BrokerTrade>",
    "trades",
    "on_stream_latest_trade_fetched",
    "trading::BrokerTrade",
    "trade",
    "on_stream_calendar_fetched",
    "QList<trading::MarketCalendarDay>",
    "days",
    "on_stream_clock_fetched",
    "trading::MarketClock",
    "clock"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7fincept7screens19EquityTradingScreenE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  152,    2, 0x08,    1 /* Private */,
       4,    1,  155,    2, 0x08,    3 /* Private */,
       6,    0,  158,    2, 0x08,    5 /* Private */,
       7,    0,  159,    2, 0x08,    6 /* Private */,
       8,    1,  160,    2, 0x08,    7 /* Private */,
       9,    1,  163,    2, 0x08,    9 /* Private */,
      12,    1,  166,    2, 0x08,   11 /* Private */,
      14,    1,  169,    2, 0x08,   13 /* Private */,
      16,    1,  172,    2, 0x08,   15 /* Private */,
      19,    0,  175,    2, 0x08,   17 /* Private */,
      20,    0,  176,    2, 0x08,   18 /* Private */,
      21,    3,  177,    2, 0x08,   19 /* Private */,
      24,    2,  184,    2, 0x08,   23 /* Private */,
      27,    2,  189,    2, 0x08,   26 /* Private */,
      30,    2,  194,    2, 0x08,   29 /* Private */,
      31,    2,  199,    2, 0x08,   32 /* Private */,
      34,    2,  204,    2, 0x08,   35 /* Private */,
      37,    2,  209,    2, 0x08,   38 /* Private */,
      40,    5,  214,    2, 0x08,   41 /* Private */,
      46,    2,  225,    2, 0x08,   47 /* Private */,
      49,    2,  230,    2, 0x08,   50 /* Private */,
      52,    2,  235,    2, 0x08,   53 /* Private */,
      55,    2,  240,    2, 0x08,   56 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 22,    3,    5,   23,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 25,    3,   26,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 28,    3,   29,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,    3,   18,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 32,    3,   33,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 35,    3,   36,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 38,    3,   39,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 41, 0x80000000 | 41, QMetaType::Double, QMetaType::Double,    3,   42,   43,   44,   45,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 47,    3,   48,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 50,    3,   51,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 53,    3,   54,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 56,    3,   57,

       0        // eod
};

Q_CONSTINIT const QMetaObject fincept::screens::EquityTradingScreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7fincept7screens19EquityTradingScreenE.offsetsAndSizes,
    qt_meta_data_ZN7fincept7screens19EquityTradingScreenE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7fincept7screens19EquityTradingScreenE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EquityTradingScreen, std::true_type>,
        // method 'on_account_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_symbol_selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_mode_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_accounts_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handle_token_expired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_order_submitted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::UnifiedOrder &, std::false_type>,
        // method 'on_cancel_order'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_ob_price_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_import_holdings_requested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerHolding> &, std::false_type>,
        // method 'refresh_candles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update_clock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stream_quote_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::BrokerQuote &, std::false_type>,
        // method 'on_stream_watchlist_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerQuote> &, std::false_type>,
        // method 'on_stream_positions_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerPosition> &, std::false_type>,
        // method 'on_stream_holdings_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerHolding> &, std::false_type>,
        // method 'on_stream_orders_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerOrderInfo> &, std::false_type>,
        // method 'on_stream_funds_updated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::BrokerFunds &, std::false_type>,
        // method 'on_stream_candles_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerCandle> &, std::false_type>,
        // method 'on_stream_orderbook_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<QPair<double,double>> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<QPair<double,double>> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_stream_time_sales_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::BrokerTrade> &, std::false_type>,
        // method 'on_stream_latest_trade_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::BrokerTrade &, std::false_type>,
        // method 'on_stream_calendar_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<trading::MarketCalendarDay> &, std::false_type>,
        // method 'on_stream_clock_fetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const trading::MarketClock &, std::false_type>
    >,
    nullptr
} };

void fincept::screens::EquityTradingScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EquityTradingScreen *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_account_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->on_symbol_selected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_mode_toggled(); break;
        case 3: _t->on_accounts_clicked(); break;
        case 4: _t->handle_token_expired((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->on_order_submitted((*reinterpret_cast< std::add_pointer_t<trading::UnifiedOrder>>(_a[1]))); break;
        case 6: _t->on_cancel_order((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->on_ob_price_clicked((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 8: _t->on_import_holdings_requested((*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerHolding>>>(_a[1]))); break;
        case 9: _t->refresh_candles(); break;
        case 10: _t->update_clock(); break;
        case 11: _t->on_stream_quote_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<trading::BrokerQuote>>(_a[3]))); break;
        case 12: _t->on_stream_watchlist_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerQuote>>>(_a[2]))); break;
        case 13: _t->on_stream_positions_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerPosition>>>(_a[2]))); break;
        case 14: _t->on_stream_holdings_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerHolding>>>(_a[2]))); break;
        case 15: _t->on_stream_orders_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerOrderInfo>>>(_a[2]))); break;
        case 16: _t->on_stream_funds_updated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<trading::BrokerFunds>>(_a[2]))); break;
        case 17: _t->on_stream_candles_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerCandle>>>(_a[2]))); break;
        case 18: _t->on_stream_orderbook_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<double,double>>>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<std::pair<double,double>>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[5]))); break;
        case 19: _t->on_stream_time_sales_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::BrokerTrade>>>(_a[2]))); break;
        case 20: _t->on_stream_latest_trade_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<trading::BrokerTrade>>(_a[2]))); break;
        case 21: _t->on_stream_calendar_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<trading::MarketCalendarDay>>>(_a[2]))); break;
        case 22: _t->on_stream_clock_fetched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<trading::MarketClock>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *fincept::screens::EquityTradingScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fincept::screens::EquityTradingScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7fincept7screens19EquityTradingScreenE.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IGroupLinked"))
        return static_cast< IGroupLinked*>(this);
    if (!strcmp(_clname, "in.fincept.IGroupLinked/1.0"))
        return static_cast< fincept::IGroupLinked*>(this);
    return QWidget::qt_metacast(_clname);
}

int fincept::screens::EquityTradingScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
