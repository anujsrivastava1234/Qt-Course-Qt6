// /7-SliderExample/main.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _7_0x2d_SliderExample_main_qml {
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x34,0x0,0x0,0x0,0x1,0x3,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x34,0x11,0x0,0x0,0x63,0x36,0x34,0x32,
0x61,0x30,0x65,0x33,0x39,0x65,0x62,0x30,
0x62,0x65,0x35,0x65,0x64,0x65,0x64,0x31,
0x63,0x64,0x66,0x36,0x30,0x36,0x64,0x35,
0x66,0x34,0x39,0x34,0x30,0x33,0x66,0x31,
0x30,0x32,0x65,0x39,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4a,0xf8,0x29,0xce,
0x9,0xf6,0x51,0x93,0x59,0x10,0x48,0x6a,
0xfa,0xcf,0x6,0xbe,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x2e,0x0,0x0,0x0,0x38,0x5,0x0,0x0,
0xa,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x1f,0x0,0x0,0x0,0x20,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x9c,0x1,0x0,0x0,
0xa,0x0,0x0,0x0,0xa0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xf0,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0xf0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd8,0xa,0x0,0x0,
0x0,0x2,0x0,0x0,0x48,0x2,0x0,0x0,
0x90,0x2,0x0,0x0,0xf8,0x2,0x0,0x0,
0x40,0x3,0x0,0x0,0x88,0x3,0x0,0x0,
0xd8,0x3,0x0,0x0,0x20,0x4,0x0,0x0,
0x80,0x4,0x0,0x0,0xe8,0x4,0x0,0x0,
0x53,0x2,0x0,0x0,0x23,0x1,0x0,0x0,
0x60,0x2,0x0,0x0,0x23,0x1,0x0,0x0,
0x70,0x2,0x0,0x0,0x23,0x1,0x0,0x0,
0x80,0x2,0x0,0x0,0x63,0x0,0x0,0x0,
0x23,0x1,0x0,0x0,0x90,0x2,0x0,0x0,
0x83,0x1,0x0,0x0,0x23,0x1,0x0,0x0,
0xa0,0x2,0x0,0x0,0x53,0x2,0x0,0x0,
0x50,0x0,0x0,0x0,0x53,0x2,0x0,0x0,
0x60,0x0,0x0,0x0,0x23,0x1,0x0,0x0,
0x60,0x2,0x0,0x0,0x23,0x1,0x0,0x0,
0xa0,0x2,0x0,0x0,0x23,0x1,0x0,0x0,
0x90,0x2,0x0,0x0,0x53,0x0,0x0,0x0,
0x23,0x1,0x0,0x0,0x70,0x2,0x0,0x0,
0x23,0x1,0x0,0x0,0x80,0x2,0x0,0x0,
0x63,0x0,0x0,0x0,0x23,0x1,0x0,0x0,
0xb0,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x78,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0x82,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xc,0xc0,
0x0,0x0,0x0,0x0,0x0,0x0,0xc5,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xa5,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xec,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0x95,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xfc,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xc6,0xbf,
0x0,0x0,0x0,0x0,0x0,0x0,0xd6,0xbf,
0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xb,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x2e,0x0,0x18,0x6,0x2,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x14,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x0,
0x2e,0x1,0x3c,0x2,0x18,0x6,0x2,0x0,
0x40,0x0,0x0,0x0,0x21,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xb,0x0,0x0,0x0,
0x15,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x15,0x0,0x0,0x0,
0x2e,0x3,0x3c,0x4,0x18,0x7,0x2e,0x5,
0x3c,0x6,0x18,0x8,0x10,0x2,0x9e,0x8,
0x80,0x7,0x18,0x9,0x2e,0x7,0x18,0xa,
0x10,0x2,0x9e,0xa,0xa2,0x9,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x18,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0x2e,0x8,0x3c,0x9,0x18,0x6,0x2,0x0,
0x40,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x19,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x19,0x0,0x0,0x0,
0x2e,0xa,0x18,0x6,0x2,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0xf,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x8,0x0,0x0,0x0,
0x1e,0x0,0x50,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1e,0x0,0x0,0x0,
0x2e,0xb,0x3c,0xc,0x18,0x7,0x2e,0xd,
0x3c,0xe,0x9c,0x7,0x18,0x6,0x2,0x0,
0x40,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x1f,0x0,0x50,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,
0x2e,0xf,0x3c,0x10,0x18,0x6,0x2,0x0,
0x40,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,
0x28,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x28,0x0,0x0,0x0,
0x2e,0x11,0x3c,0x12,0x18,0x7,0x2e,0x13,
0x3c,0x14,0x18,0x8,0x2e,0x15,0x3c,0x16,
0x18,0x9,0x2e,0x17,0xa2,0x9,0x9c,0x8,
0x80,0x7,0x18,0x6,0x2,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x21,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xb,0x0,0x0,0x0,
0x29,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x29,0x0,0x0,0x0,
0x2e,0x18,0x3c,0x19,0x18,0x7,0x2e,0x1a,
0x3c,0x1b,0x18,0x8,0x10,0x2,0x9e,0x8,
0x80,0x7,0x18,0x9,0x2e,0x1c,0x18,0xa,
0x10,0x2,0x9e,0xa,0xa2,0x9,0x18,0x6,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0xf,0x0,0x0,0x0,
0x21,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x2d,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2d,0x0,0x0,0x0,
0x2e,0x1d,0x3c,0x1e,0x50,0x4,0x12,0x2c,
0x4c,0x2,0x12,0x2d,0x18,0x6,0x2,0x0,
0xf0,0x5,0x0,0x0,0xf8,0x5,0x0,0x0,
0x10,0x6,0x0,0x0,0x38,0x6,0x0,0x0,
0x60,0x6,0x0,0x0,0x78,0x6,0x0,0x0,
0x88,0x6,0x0,0x0,0xa0,0x6,0x0,0x0,
0xb8,0x6,0x0,0x0,0xc8,0x6,0x0,0x0,
0xf0,0x6,0x0,0x0,0x8,0x7,0x0,0x0,
0x20,0x7,0x0,0x0,0x38,0x7,0x0,0x0,
0x70,0x7,0x0,0x0,0x88,0x7,0x0,0x0,
0x98,0x7,0x0,0x0,0xa8,0x7,0x0,0x0,
0xb8,0x7,0x0,0x0,0xd0,0x7,0x0,0x0,
0xe8,0x7,0x0,0x0,0xf0,0x7,0x0,0x0,
0x18,0x8,0x0,0x0,0x20,0x8,0x0,0x0,
0x48,0x8,0x0,0x0,0x70,0x8,0x0,0x0,
0x90,0x8,0x0,0x0,0xc0,0x8,0x0,0x0,
0xf0,0x8,0x0,0x0,0x8,0x9,0x0,0x0,
0x18,0x9,0x0,0x0,0x28,0x9,0x0,0x0,
0x38,0x9,0x0,0x0,0x58,0x9,0x0,0x0,
0x88,0x9,0x0,0x0,0xa0,0x9,0x0,0x0,
0xb0,0x9,0x0,0x0,0xc8,0x9,0x0,0x0,
0xe0,0x9,0x0,0x0,0x0,0xa,0x0,0x0,
0x20,0xa,0x0,0x0,0x48,0xa,0x0,0x0,
0x70,0xa,0x0,0x0,0x98,0xa,0x0,0x0,
0xb0,0xa,0x0,0x0,0xc8,0xa,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x2e,0x0,0x43,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x72,0x0,0x6f,0x0,
0x6c,0x0,0x73,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x2e,0x0,0x4c,0x0,0x61,0x0,
0x79,0x0,0x6f,0x0,0x75,0x0,0x74,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x57,0x0,0x69,0x0,
0x6e,0x0,0x64,0x0,0x6f,0x0,0x77,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x76,0x0,0x69,0x0,
0x73,0x0,0x69,0x0,0x62,0x0,0x6c,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x74,0x0,0x69,0x0,
0x74,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x53,0x0,0x6c,0x0,
0x69,0x0,0x64,0x0,0x65,0x0,0x72,0x0,
0x20,0x0,0x45,0x0,0x78,0x0,0x61,0x0,
0x6d,0x0,0x70,0x0,0x6c,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x43,0x0,0x6f,0x0,
0x6c,0x0,0x75,0x0,0x6d,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x63,0x0,0x68,0x0,0x6f,0x0,0x72,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x63,0x0,0x65,0x0,
0x6e,0x0,0x74,0x0,0x65,0x0,0x72,0x0,
0x49,0x0,0x6e,0x0,0x0,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x65,0x0,0x6e,0x0,
0x74,0x0,0x65,0x0,0x72,0x0,0x49,0x0,
0x6e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x53,0x0,0x6c,0x0,
0x69,0x0,0x64,0x0,0x65,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x72,0x0,
0x6f,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x76,0x0,0x61,0x0,
0x6c,0x0,0x75,0x0,0x65,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x74,0x0,0x6f,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x72,0x0,0x6f,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x61,0x0,0x6e,0x0,
0x67,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x78,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x78,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x79,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x79,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x69,0x0,0x6d,0x0,
0x70,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x69,0x0,0x74,0x0,0x48,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x69,0x0,0x6d,0x0,
0x70,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x69,0x0,0x74,0x0,0x57,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x77,0x0,0x69,0x0,0x64,0x0,
0x74,0x0,0x68,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x68,0x0,0x65,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x74,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x72,0x0,0x61,0x0,
0x64,0x0,0x69,0x0,0x75,0x0,0x73,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x67,0x0,0x72,0x0,
0x61,0x0,0x79,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x62,0x0,0x61,0x0,
0x63,0x0,0x6b,0x0,0x67,0x0,0x72,0x0,
0x6f,0x0,0x75,0x0,0x6e,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x6f,0x0,0x6c,0x0,
0x6f,0x0,0x72,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x62,0x0,0x6f,0x0,
0x72,0x0,0x64,0x0,0x65,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x67,0x0,0x72,0x0,
0x65,0x0,0x65,0x0,0x6e,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x61,0x0,
0x6e,0x0,0x64,0x0,0x6c,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x6c,0x0,0x65,0x0,
0x66,0x0,0x74,0x0,0x50,0x0,0x61,0x0,
0x64,0x0,0x64,0x0,0x69,0x0,0x6e,0x0,
0x67,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x74,0x0,0x6f,0x0,
0x70,0x0,0x50,0x0,0x61,0x0,0x64,0x0,
0x64,0x0,0x69,0x0,0x6e,0x0,0x67,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x61,0x0,0x76,0x0,
0x61,0x0,0x69,0x0,0x6c,0x0,0x61,0x0,
0x62,0x0,0x6c,0x0,0x65,0x0,0x48,0x0,
0x65,0x0,0x69,0x0,0x67,0x0,0x68,0x0,
0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x61,0x0,0x76,0x0,
0x61,0x0,0x69,0x0,0x6c,0x0,0x61,0x0,
0x62,0x0,0x6c,0x0,0x65,0x0,0x57,0x0,
0x69,0x0,0x64,0x0,0x74,0x0,0x68,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x76,0x0,0x69,0x0,
0x73,0x0,0x75,0x0,0x61,0x0,0x6c,0x0,
0x50,0x0,0x6f,0x0,0x73,0x0,0x69,0x0,
0x74,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x70,0x0,0x72,0x0,
0x65,0x0,0x73,0x0,0x73,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x79,0x0,0x65,0x0,
0x6c,0x0,0x6c,0x0,0x6f,0x0,0x77,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x68,0x0,
0x69,0x0,0x74,0x0,0x65,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x10,0x0,0xff,0xff,0x0,0x0,
0x1,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x3,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x6c,0x0,0x0,0x0,
0x3c,0x1,0x0,0x0,0xc4,0x1,0x0,0x0,
0x34,0x2,0x0,0x0,0x4,0x3,0x0,0x0,
0x34,0x4,0x0,0x0,0xec,0x4,0x0,0x0,
0xec,0x5,0x0,0x0,0x4,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x5,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xcc,0x0,0x0,0x0,
0x4,0x0,0x10,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0x5,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x8,0x0,0xc0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x50,0x0,0x7,0x0,0xe0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x50,0x0,0x6,0x0,0xd0,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x50,0x0,0x5,0x0,0xc0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x50,0x0,0xa,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0xa,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0xa,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x90,0x0,0xd,0x0,0x90,0x0,
0xb,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x90,0x0,0xb,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0xb,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x10,0x1,0xb,0x0,0xa0,0x1,
0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x5,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xcc,0x0,0x0,0x0,
0xd,0x0,0x90,0x0,0x11,0x0,0xd0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x24,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x27,0x0,0xd0,0x0,0x27,0x0,0x50,0x1,
0x20,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0xd0,0x0,0x13,0x0,0x90,0x1,
0x11,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0xd0,0x0,0x10,0x0,0x0,0x1,
0x10,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0xd0,0x0,0xf,0x0,0x30,0x1,
0xf,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0xd0,0x0,0xe,0x0,0x20,0x1,
0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x9,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x2c,0x1,0x0,0x0,
0x13,0x0,0x90,0x1,0x0,0x0,0x0,0x0,
0x2c,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x2c,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x1e,0x0,0x0,0x0,
0x1b,0x0,0x10,0x1,0x1b,0x0,0x70,0x1,
0x1c,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x10,0x1,0x1a,0x0,0x90,0x1,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x19,0x0,0x10,0x1,0x19,0x0,0x90,0x1,
0x5,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x0,0x10,0x1,0x18,0x0,0x80,0x1,
0x19,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x17,0x0,0x10,0x1,0x17,0x0,0x0,0x2,
0x18,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x10,0x1,0x16,0x0,0x0,0x2,
0x16,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x10,0x1,0x15,0x0,0x30,0x1,
0x14,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x10,0x1,0x14,0x0,0x30,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x10,0x1,0x1d,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x4,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x1d,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1c,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x21,0x0,0x50,0x1,0x21,0x0,0xd0,0x1,
0x1d,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,
0x20,0x0,0x50,0x1,0x20,0x0,0xc0,0x1,
0x6,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1f,0x0,0x50,0x1,0x1f,0x0,0xd0,0x1,
0x5,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1e,0x0,0x50,0x1,0x1e,0x0,0xc0,0x1,
0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xfc,0x0,0x0,0x0,
0x27,0x0,0x50,0x1,0x0,0x0,0x0,0x0,
0xfc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xfc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2d,0x0,0x10,0x1,0x2d,0x0,0x70,0x1,
0x1c,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x9,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2c,0x0,0x10,0x1,0x2c,0x0,0x80,0x1,
0x19,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2b,0x0,0x10,0x1,0x2b,0x0,0x0,0x2,
0x18,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2a,0x0,0x10,0x1,0x2a,0x0,0x10,0x2,
0x16,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x29,0x0,0x10,0x1,0x29,0x0,0x30,0x1,
0x14,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x28,0x0,0x10,0x1,0x28,0x0,0x30,0x1,
0x22,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2e,0x0,0x10,0x1,0x2e,0x0,0x80,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x2e,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x2e,0x0,0x80,0x1,0x2e,0x0,0xe0,0x1,
0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr);
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           new (dataPtr) return_type(binding(aotContext, argumentsPtr));
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2;
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(0, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(0, QMetaType::fromName("QQuickItem*"));
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
}
{
}
// generate_StoreReg
// r6 = r2;
{
}
// generate_Ret
return r2;
{
}
});}
 },{ 1, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2;
double r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(1, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(1);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(2, r2, &r2_1)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(2, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return r2_1;
{
}
});}
 },{ 2, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r8;
int r2_2;
QObject *r2;
double r2_1;
double r9;
double r10;
double r7;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(3, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(3);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(4, r2, &r2_1)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(4, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r7 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(5, &r2)) {
aotContext->setInstructionPointer(8);
aotContext->initLoadContextIdLookup(5);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(6, r2, &r2_1)) {
aotContext->setInstructionPointer(10);
aotContext->initGetObjectLookup(6, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r8 = r2_1;
{
}
// generate_LoadInt
r2_2 = 2;
{
}
// generate_Div
r2_1 = r8 / double(r2_2);
{
}
// generate_Add
r2_1 = r7 + r2_1;
{
}
// generate_StoreReg
r9 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(7, &r2_1)) {
aotContext->setInstructionPointer(22);
aotContext->initLoadScopeObjectPropertyLookup(7, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r10 = r2_1;
{
}
// generate_LoadInt
r2_2 = 2;
{
}
// generate_Div
r2_1 = r10 / double(r2_2);
{
}
// generate_Sub
r2_1 = r9 - r2_1;
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return r2_1;
{
}
});}
 },{ 3, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2;
double r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(8, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(8);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(9, r2, &r2_1)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(9, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return r2_1;
{
}
});}
 },{ 4, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r2;
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(10, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(10, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
// r6 = r2;
{
}
// generate_Ret
return r2;
{
}
});}
 },{ 5, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2;
double r2_1;
double r7;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(11, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(11);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(12, r2, &r2_1)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(12, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r7 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(13, &r2)) {
aotContext->setInstructionPointer(8);
aotContext->initLoadScopeObjectPropertyLookup(13, QMetaType::fromName("QQuickItem*"));
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(14, r2, &r2_1)) {
aotContext->setInstructionPointer(10);
aotContext->initGetObjectLookup(14, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_Mul
r2_1 = r7 * r2_1;
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return r2_1;
{
}
});}
 },{ 6, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2;
double r2_1;
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(15, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(15, QMetaType::fromName("QQuickItem*"));
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(16, r2, &r2_1)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(16, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return r2_1;
{
}
});}
 },{ 7, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r8;
QObject *r2;
double r2_1;
double r9;
double r7;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(17, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(17);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(18, r2, &r2_1)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(18, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r7 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(19, &r2)) {
aotContext->setInstructionPointer(8);
aotContext->initLoadContextIdLookup(19);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(20, r2, &r2_1)) {
aotContext->setInstructionPointer(10);
aotContext->initGetObjectLookup(20, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r8 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(21, &r2)) {
aotContext->setInstructionPointer(14);
aotContext->initLoadContextIdLookup(21);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(22, r2, &r2_1)) {
aotContext->setInstructionPointer(16);
aotContext->initGetObjectLookup(22, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r9 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(23, &r2_1)) {
aotContext->setInstructionPointer(20);
aotContext->initLoadScopeObjectPropertyLookup(23, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_Sub
r2_1 = r9 - r2_1;
{
}
// generate_Mul
r2_1 = r8 * r2_1;
{
}
// generate_Add
r2_1 = r7 + r2_1;
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return r2_1;
{
}
});}
 },{ 8, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r8;
int r2_2;
QObject *r2;
double r2_1;
double r9;
double r10;
double r7;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(24, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(24);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(25, r2, &r2_1)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(25, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r7 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(26, &r2)) {
aotContext->setInstructionPointer(8);
aotContext->initLoadContextIdLookup(26);
if (aotContext->engine->hasError())
    return 0.0;
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(27, r2, &r2_1)) {
aotContext->setInstructionPointer(10);
aotContext->initGetObjectLookup(27, r2, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r8 = r2_1;
{
}
// generate_LoadInt
r2_2 = 2;
{
}
// generate_Div
r2_1 = r8 / double(r2_2);
{
}
// generate_Add
r2_1 = r7 + r2_1;
{
}
// generate_StoreReg
r9 = r2_1;
{
}
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(28, &r2_1)) {
aotContext->setInstructionPointer(22);
aotContext->initLoadScopeObjectPropertyLookup(28, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return 0.0;
}
}
{
}
// generate_StoreReg
r10 = r2_1;
{
}
// generate_LoadInt
r2_2 = 2;
{
}
// generate_Div
r2_1 = r10 / double(r2_2);
{
}
// generate_Sub
r2_1 = r9 - r2_1;
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return r2_1;
{
}
});}
 },{ 9, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
bool r2_2;
QObject *r2;
QString r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(29, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadContextIdLookup(29);
if (aotContext->engine->hasError())
    return QVariant();
}
{
}
// generate_GetLookup
{
while (!aotContext->getObjectLookup(30, r2, &r2_2)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(30, r2, QMetaType::fromType<bool>());
if (aotContext->engine->hasError())
    return QVariant();
}
}
{
}
// generate_JumpFalse
if (!r2_2) {
    goto label_0;
}
;
{
}
// generate_LoadRuntimeString
r2_1 = QStringLiteral("yellow");
{
}
// generate_Jump
{
    goto label_1;
}
;
{
}
label_0:;
// generate_LoadRuntimeString
r2_1 = QStringLiteral("white");
{
}
label_1:;
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_Ret
return QVariant::fromValue(r2_1);
{
}
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}