//Autogenerated Static Lib File:
//Generated on: 03/23/09 13:57:52

#ifndef INCLUDE_SYMBOLS_LUALOADER
#define INCLUDE_SYMBOLS_LUALOADER
#endif	//#ifndef INCLUDE_SYMBOLS_LUALOADER
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *LUALOADER_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CLuaScriptLoaderRO;
//Component externs
extern "C" CRegisterComponent CLuaScriptLoaderRO;
//Message externs
extern "C" CRegisterMessage LoadFile_CLuaScriptLoaderRM;
extern "C" CRegisterMessage SaveFile_CLuaScriptLoaderRM;

#endif	//#ifdef _LIB
