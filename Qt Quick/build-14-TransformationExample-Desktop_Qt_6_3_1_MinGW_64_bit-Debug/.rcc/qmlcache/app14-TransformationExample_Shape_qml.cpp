// /14-TransformationExample/Shape.qml
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
namespace _14_0x2d_TransformationExample_Shape_qml {
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x34,0x0,0x0,0x0,0x1,0x3,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x28,0x5,0x0,0x0,0x63,0x36,0x34,0x32,
0x61,0x30,0x65,0x33,0x39,0x65,0x62,0x30,
0x62,0x65,0x35,0x65,0x64,0x65,0x64,0x31,
0x63,0x64,0x66,0x36,0x30,0x36,0x64,0x35,
0x66,0x34,0x39,0x34,0x30,0x33,0x66,0x31,
0x30,0x32,0x65,0x39,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6a,0x14,0xa,0x5e,
0xef,0xb,0x29,0x37,0x60,0xf9,0xc,0x4b,
0xd7,0x57,0xc9,0xe1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0xc0,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x0,0x1,0x0,0x0,
0x3,0x0,0x0,0x0,0x4,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x50,0x3,0x0,0x0,
0x18,0x1,0x0,0x0,0x68,0x1,0x0,0x0,
0xb0,0x1,0x0,0x0,0x33,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0xd3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xa5,0xbf,
0x40,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc,0x0,0x0,0x0,
0xcc,0x2e,0x0,0x18,0x7,0xac,0x1,0x7,
0x0,0x0,0x18,0x6,0xd6,0x16,0x6,0x2,
0x40,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xb,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x2e,0x2,0x18,0x6,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf8,0x1,0x0,0x0,0x0,0x2,0x0,0x0,
0x18,0x2,0x0,0x0,0x28,0x2,0x0,0x0,
0x38,0x2,0x0,0x0,0x50,0x2,0x0,0x0,
0x60,0x2,0x0,0x0,0x78,0x2,0x0,0x0,
0x90,0x2,0x0,0x0,0xa8,0x2,0x0,0x0,
0xb8,0x2,0x0,0x0,0xe8,0x2,0x0,0x0,
0x0,0x3,0x0,0x0,0x38,0x3,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x49,0x0,0x6d,0x0,
0x61,0x0,0x67,0x0,0x65,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x72,0x0,0x6f,0x0,
0x6f,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x63,0x0,0x6c,0x0,
0x69,0x0,0x63,0x0,0x6b,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x4d,0x0,0x6f,0x0,
0x75,0x0,0x73,0x0,0x65,0x0,0x41,0x0,
0x72,0x0,0x65,0x0,0x61,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x63,0x0,0x68,0x0,0x6f,0x0,0x72,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x69,0x0,
0x6c,0x0,0x6c,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x66,0x0,0x69,0x0,0x6c,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x43,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x43,0x0,
0x6c,0x0,0x69,0x0,0x63,0x0,0x6b,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x30,0x0,0x0,0x0,
0xe0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x1,0x0,0x3,0x0,
0x58,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa0,0x0,0x0,0x0,0x3,0x0,0x10,0x0,
0x4,0x0,0x50,0x0,0xa0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xa0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xa0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x50,0x0,0x7,0x0,0xd0,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x50,0x0,0x6,0x0,0xc0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x50,0x0,0xa,0x0,0x50,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0xa,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc,0x0,0x90,0x0,
0xc,0x0,0x40,0x1,0x8,0x0,0x0,0x0,
0x0,0x0,0xa,0x0,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x90,0x0,
0xb,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0xff,0xff,0xff,0xff,0xff,0xff,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0xb,0x0,0x90,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x10,0x1,
0xb,0x0,0x70,0x1,0x0,0x0,0x0,0x0
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
{ 0, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2;
QObject *r7;
// generate_CreateCallContext
{
{
}
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(0, &r2)) {
aotContext->setInstructionPointer(3);
aotContext->initLoadContextIdLookup(0);
if (aotContext->engine->hasError())
    return ;
}
{
}
// generate_StoreReg
r7 = r2;
{
}
// generate_CallPropertyLookup
{
void *args[] = { nullptr };
const QMetaType types[] = { QMetaType() };
while (!aotContext->callObjectPropertyLookup(1, r7, args, types, 0)) {
aotContext->setInstructionPointer(10);
aotContext->initCallObjectPropertyLookup(1);
if (aotContext->engine->hasError())
    return ;
}
// r2_1 = {};
}
{
}
// generate_StoreReg
// r6 = r2_1;
{
}
// generate_PopContext
;}
{
}
// generate_LoadReg
{
}
// generate_Ret
return;
{
}
});}
 },{ 1, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2;
// generate_LoadQmlContextPropertyLookup
{
while (!aotContext->loadScopeObjectPropertyLookup(2, &r2)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(2, QMetaType::fromName("QQuickItem*"));
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
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}