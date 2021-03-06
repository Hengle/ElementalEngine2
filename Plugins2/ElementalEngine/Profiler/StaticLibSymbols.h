//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:25:09

#ifndef INCLUDE_SYMBOLS_PROFILER
#define INCLUDE_SYMBOLS_PROFILER
#endif	//#ifndef INCLUDE_SYMBOLS_PROFILER
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *PROFILER_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CProfilerManagerRO;
//Component externs
extern "C" CRegisterComponent CProfilerManagerRO;
//Message externs
extern "C" CRegisterMessage SetProfilerStrobeTime_CProfilerManagerRM;
extern "C" CRegisterMessage ShowHideProfilerWindow_CProfilerManagerRM;

#endif	//#ifdef _LIB
