/****************************************************************************
** Meta object code from reading C++ file 'cwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../cwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CWidget_t {
    QByteArrayData data[14];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CWidget_t qt_meta_stringdata_CWidget = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CWidget"
QT_MOC_LITERAL(1, 8, 25), // "on_listView_doubleClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 47, 5), // "index"
QT_MOC_LITERAL(5, 53, 19), // "onBackButtonClicked"
QT_MOC_LITERAL(6, 73, 7), // "clicked"
QT_MOC_LITERAL(7, 81, 13), // "onPathEntered"
QT_MOC_LITERAL(8, 95, 19), // "onMultiChoiceCliked"
QT_MOC_LITERAL(9, 115, 4), // "cdUP"
QT_MOC_LITERAL(10, 120, 6), // "toRoot"
QT_MOC_LITERAL(11, 127, 10), // "updatePath"
QT_MOC_LITERAL(12, 138, 11), // "dialogClose"
QT_MOC_LITERAL(13, 150, 15) // "multichoiceSort"

    },
    "CWidget\0on_listView_doubleClicked\0\0"
    "QModelIndex\0index\0onBackButtonClicked\0"
    "clicked\0onPathEntered\0onMultiChoiceCliked\0"
    "cdUP\0toRoot\0updatePath\0dialogClose\0"
    "multichoiceSort"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       8,    0,   68,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x09 /* Protected */,
      10,    0,   70,    2, 0x09 /* Protected */,
      11,    0,   71,    2, 0x09 /* Protected */,
      12,    0,   72,    2, 0x09 /* Protected */,
      13,    1,   73,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void CWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_listView_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->onBackButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onPathEntered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->onMultiChoiceCliked(); break;
        case 4: _t->cdUP(); break;
        case 5: _t->toRoot(); break;
        case 6: _t->updatePath(); break;
        case 7: _t->dialogClose(); break;
        case 8: _t->multichoiceSort((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CWidget.data,
    qt_meta_data_CWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
