//Autogenerated Static Lib File:
//Generated on: 03/23/09 14:26:54

#ifndef INCLUDE_SYMBOLS_GUISYSTEM
#define INCLUDE_SYMBOLS_GUISYSTEM
#endif	//#ifndef INCLUDE_SYMBOLS_GUISYSTEM
#ifdef _LIB

namespace ElementalEngine {
struct INITDLLINFO;
class CRegisterComponent;
class CRegisterMessage;
}

using namespace ElementalEngine;


extern void *GUISYSTEM_LIBEXTERNS[];
//Singleton externs
extern "C" CRegisterComponent CGUIManagerRO;
//Component externs
extern "C" CRegisterComponent CGUIAnimationRO;
extern "C" CRegisterComponent CGUIComboBoxRO;
extern "C" CRegisterComponent CGUIElementRO;
extern "C" CRegisterComponent CGUIGroupRO;
extern "C" CRegisterComponent CGUIInstanceRO;
extern "C" CRegisterComponent CGUIItemRO;
extern "C" CRegisterComponent CGUIManagerRO;
extern "C" CRegisterComponent CGUIMovieRO;
extern "C" CRegisterComponent CGUIPageRO;
extern "C" CRegisterComponent CGUISpinnerItemRO;
extern "C" CRegisterComponent CGUIStaticArtRO;
extern "C" CRegisterComponent CGUIStaticTextRO;
extern "C" CRegisterComponent CGUIStatusBarRO;
//Message externs
extern "C" CRegisterMessage StartGUIAnimation_CGUIAnimationRM;
extern "C" CRegisterMessage StopGUIAnimation_CGUIAnimationRM;
extern "C" CRegisterMessage GetGUIAnimationIsRunning_CGUIAnimationRM;
extern "C" CRegisterMessage GetAnimationData_CGUIAnimationRM;
extern "C" CRegisterMessage ScrubGUIAnimation_CGUIAnimationRM;
extern "C" CRegisterMessage AddKeysToAnimation_CGUIAnimationRM;
extern "C" CRegisterMessage AddOneKey_CGUIAnimationRM;
extern "C" CRegisterMessage DeleteOneKey_CGUIAnimationRM;
extern "C" CRegisterMessage AddGUIAnimationCallback_CGUIAnimationRM;
extern "C" CRegisterMessage ChangeGUIAnimKey_CGUIAnimationRM;
extern "C" CRegisterMessage IsGUIAnimationRelativePositions_CGUIAnimationRM;
extern "C" CRegisterMessage GetComboData_CGUIComboBoxRM;
extern "C" CRegisterMessage AddEntry_CGUIComboBoxRM;
extern "C" CRegisterMessage ClearComboBox_CGUIComboBoxRM;
extern "C" CRegisterMessage SetPosition_CGUIElementRM;
extern "C" CRegisterMessage SetSize_CGUIElementRM;
extern "C" CRegisterMessage GetPosition_CGUIElementRM;
extern "C" CRegisterMessage GetSize_CGUIElementRM;
extern "C" CRegisterMessage GetZOrder_CGUIElementRM;
extern "C" CRegisterMessage SetZOrder_CGUIElementRM;
extern "C" CRegisterMessage MouseMove_CGUIElementRM;
extern "C" CRegisterMessage LeftMousePress_CGUIElementRM;
extern "C" CRegisterMessage LeftMouseRelease_CGUIElementRM;
extern "C" CRegisterMessage KeyPress_CGUIElementRM;
extern "C" CRegisterMessage RemoveFocus_CGUIElementRM;
extern "C" CRegisterMessage Disable_CGUIElementRM;
extern "C" CRegisterMessage Enable_CGUIElementRM;
extern "C" CRegisterMessage GUIKeyLeft_CGUIElementRM;
extern "C" CRegisterMessage GUIKeyRight_CGUIElementRM;
extern "C" CRegisterMessage GUIKeyHome_CGUIElementRM;
extern "C" CRegisterMessage GUIKeyEnd_CGUIElementRM;
extern "C" CRegisterMessage GUIKeyDel_CGUIElementRM;
extern "C" CRegisterMessage GUIKeyBackSpace_CGUIElementRM;
extern "C" CRegisterMessage GUIKeyEnter_CGUIElementRM;
extern "C" CRegisterMessage AddGUIElement_CGUIGroupRM;
extern "C" CRegisterMessage RemoveGUIElement_CGUIGroupRM;
extern "C" CRegisterMessage GetObjUnderCursor_CGUIGroupRM;
extern "C" CRegisterMessage GetObjInsideRect_CGUIGroupRM;
extern "C" CRegisterMessage ShowGroup_CGUIGroupRM;
extern "C" CRegisterMessage HideGroup_CGUIGroupRM;
extern "C" CRegisterMessage GetIsGroupVisible_CGUIGroupRM;
extern "C" CRegisterMessage GetGroupItemList_CGUIGroupRM;
extern "C" CRegisterMessage SetPosition_CGUIGroupRM;
extern "C" CRegisterMessage SetSize_CGUIGroupRM;
extern "C" CRegisterMessage GetPosition_CGUIGroupRM;
extern "C" CRegisterMessage GetSize_CGUIGroupRM;
extern "C" CRegisterMessage GetZOrder_CGUIGroupRM;
extern "C" CRegisterMessage SetZOrder_CGUIGroupRM;
extern "C" CRegisterMessage SetAttachOffset_CGUIGroupRM;
extern "C" CRegisterMessage SetPosition_CGUIInstanceRM;
extern "C" CRegisterMessage SetPositionRelative_CGUIInstanceRM;
extern "C" CRegisterMessage GetPositionRelative_CGUIInstanceRM;
extern "C" CRegisterMessage SetSize_CGUIInstanceRM;
extern "C" CRegisterMessage GetPosition_CGUIInstanceRM;
extern "C" CRegisterMessage GetSize_CGUIInstanceRM;
extern "C" CRegisterMessage GetZOrder_CGUIInstanceRM;
extern "C" CRegisterMessage SetZOrder_CGUIInstanceRM;
extern "C" CRegisterMessage SetColor_CGUIInstanceRM;
extern "C" CRegisterMessage GetColor_CGUIInstanceRM;
extern "C" CRegisterMessage SetAlpha_CGUIInstanceRM;
extern "C" CRegisterMessage GetAngle_CGUIInstanceRM;
extern "C" CRegisterMessage SetAngle_CGUIInstanceRM;
extern "C" CRegisterMessage SetAngleFromLua_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_PosX_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_PosY_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_SizeX_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_SizeY_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_AlphaCol_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_RCol_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_GCol_CGUIInstanceRM;
extern "C" CRegisterMessage GUIAnim_BCol_CGUIInstanceRM;
extern "C" CRegisterMessage SetItemReference_CGUIInstanceRM;
extern "C" CRegisterMessage GetItemReference_CGUIInstanceRM;
extern "C" CRegisterMessage SelectBtPressed_CGUIInstanceRM;
extern "C" CRegisterMessage BackBtPressed_CGUIInstanceRM;
extern "C" CRegisterMessage ToggleUpBtPressed_CGUIInstanceRM;
extern "C" CRegisterMessage ToggleDownBtPressed_CGUIInstanceRM;
extern "C" CRegisterMessage GetItemText_CGUIInstanceRM;
extern "C" CRegisterMessage SetItemText_CGUIInstanceRM;
extern "C" CRegisterMessage GetGUIParentName_CGUIInstanceRM;
extern "C" CRegisterMessage GetSelectRect_CGUIItemRM;
extern "C" CRegisterMessage SetButtonImage_CGUIItemRM;
extern "C" CRegisterMessage MouseMove_CGUIManagerRM;
extern "C" CRegisterMessage LeftMousePress_CGUIManagerRM;
extern "C" CRegisterMessage LeftMouseRelease_CGUIManagerRM;
extern "C" CRegisterMessage KeyPress_CGUIManagerRM;
extern "C" CRegisterMessage KeyRelease_CGUIManagerRM;
extern "C" CRegisterMessage GUIManagerSetActivePage_CGUIManagerRM;
extern "C" CRegisterMessage ChangeObjectName_CGUIManagerRM;
extern "C" CRegisterMessage FindGUIObject_CGUIManagerRM;
extern "C" CRegisterMessage Start_CGUIManagerRM;
extern "C" CRegisterMessage Stop_CGUIManagerRM;
extern "C" CRegisterMessage ClearGUIObjects_CGUIManagerRM;
extern "C" CRegisterMessage SetWindowSize_CGUIManagerRM;
extern "C" CRegisterMessage SetGUIEditorMode_CGUIManagerRM;
extern "C" CRegisterMessage GetGUIMousePosition_CGUIManagerRM;
extern "C" CRegisterMessage GetZoomFactor_CGUIManagerRM;
extern "C" CRegisterMessage SetZoomFactor_CGUIManagerRM;
extern "C" CRegisterMessage SetXScale_CGUIManagerRM;
extern "C" CRegisterMessage SetYScale_CGUIManagerRM;
extern "C" CRegisterMessage SetActiveMode_CGUIManagerRM;
extern "C" CRegisterMessage SetGUIRenderToTexture_CGUIManagerRM;
extern "C" CRegisterMessage GetGUIRenderObjects_CGUIManagerRM;
extern "C" CRegisterMessage DisableBatchRendering_CGUIManagerRM;
extern "C" CRegisterMessage RenderPageToContext_CGUIManagerRM;
extern "C" CRegisterMessage GUIManagerIncrementZoom_CGUIManagerRM;
extern "C" CRegisterMessage GUIManagerDecrementZoom_CGUIManagerRM;
extern "C" CRegisterMessage GUIManagerSetPageOffset_CGUIManagerRM;
extern "C" CRegisterMessage SetGUIWorkingRes_CGUIManagerRM;
extern "C" CRegisterMessage CheckGUISystemEmpty_CGUIManagerRM;
extern "C" CRegisterMessage LoadingUpdate_CGUIManagerRM;
extern "C" CRegisterMessage QueueGUIStateEvent_CGUIManagerRM;
extern "C" CRegisterMessage SetGUIStateObject_CGUIManagerRM;
extern "C" CRegisterMessage RenderUpdate_CGUIManagerRM;
extern "C" CRegisterMessage GetGUIScreenSize_CGUIManagerRM;
extern "C" CRegisterMessage SetGUIFontGlyphDB_CGUIManagerRM;
extern "C" CRegisterMessage AddGUILanguage_CGUIManagerRM;
extern "C" CRegisterMessage RemoveGUILanguage_CGUIManagerRM;
extern "C" CRegisterMessage SetActiveGUILanguage_CGUIManagerRM;
extern "C" CRegisterMessage GetGUILanguages_CGUIManagerRM;
extern "C" CRegisterMessage GUIKeyLeft_CGUIManagerRM;
extern "C" CRegisterMessage GUIKeyRight_CGUIManagerRM;
extern "C" CRegisterMessage GUIKeyHome_CGUIManagerRM;
extern "C" CRegisterMessage GUIKeyEnd_CGUIManagerRM;
extern "C" CRegisterMessage GUIKeyDel_CGUIManagerRM;
extern "C" CRegisterMessage GUIKeyBackSpace_CGUIManagerRM;
extern "C" CRegisterMessage GUIKeyEnter_CGUIManagerRM;
extern "C" CRegisterMessage StartGUIMovie_CGUIMovieRM;
extern "C" CRegisterMessage StopGUIMovie_CGUIMovieRM;
extern "C" CRegisterMessage GetObjUnderCursor_CGUIPageRM;
extern "C" CRegisterMessage AddGUIElementToPage_CGUIPageRM;
extern "C" CRegisterMessage RemoveGUIElementFromPage_CGUIPageRM;
extern "C" CRegisterMessage GetObjInsideRect_CGUIPageRM;
extern "C" CRegisterMessage GetPageItemList_CGUIPageRM;
extern "C" CRegisterMessage SetSpinnerMaxValue_CGUISpinnerItemRM;
extern "C" CRegisterMessage SetSpinnerMinValue_CGUISpinnerItemRM;
extern "C" CRegisterMessage SetStaticImage_CGUIStaticArtRM;
extern "C" CRegisterMessage SetText_CGUIStaticTextRM;
extern "C" CRegisterMessage GetText_CGUIStaticTextRM;
extern "C" CRegisterMessage SetTextFile_CGUIStaticTextRM;
extern "C" CRegisterMessage SetTextColor_CGUIStaticTextRM;
extern "C" CRegisterMessage UpdateLanguageEntryParams_CGUIStaticTextRM;
extern "C" CRegisterMessage ChangeLanguageEntryKey_CGUIStaticTextRM;
extern "C" CRegisterMessage UpdateStatusBarPos_CGUIStatusBarRM;
extern "C" CRegisterMessage SetStatusBarAnimated_CGUIStatusBarRM;
extern "C" CRegisterMessage SetStatusBarFrozen_CGUIStatusBarRM;
extern "C" CRegisterMessage SetStatusBarLinger_CGUIStatusBarRM;
extern "C" CRegisterMessage LoadingUpdate_CGUIStatusBarRM;

#endif	//#ifdef _LIB
