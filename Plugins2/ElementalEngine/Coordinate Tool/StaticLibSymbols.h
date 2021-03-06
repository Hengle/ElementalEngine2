//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:26:48

#ifndef INCLUDE_SYMBOLS_COORDINATETOOL
#define INCLUDE_SYMBOLS_COORDINATETOOL
#endif	//#ifndef INCLUDE_SYMBOLS_COORDINATETOOL
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *COORDINATETOOL_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CCoordinateToolManagerRO;
//Component externs
extern "C" CRegisterComponent CCoordinateObjectRO;
extern "C" CRegisterComponent CCoordinateRenderObjectRO;
extern "C" CRegisterComponent CCoordinateToolManagerRO;
//Message externs
extern "C" CRegisterMessage GetGlobalPosition_CCoordinateObjectRM;
extern "C" CRegisterMessage SetGlobalPosition_CCoordinateObjectRM;

#endif	//#ifdef _LIB
