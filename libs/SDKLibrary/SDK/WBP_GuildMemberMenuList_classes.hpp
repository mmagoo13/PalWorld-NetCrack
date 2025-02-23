#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuildMemberMenuList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_GuildMemberMenuList.WBP_GuildMemberMenuList_C
// 0x0048 (0x02C0 - 0x0278)
class UWBP_GuildMemberMenuList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_NormalToFocus;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 FocusBase;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Frame;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FrameFlare;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_Title;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInvisibleButton_C*              WBP_PalInvisibleButton;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClicked;                                         // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void SetText(const class FText& NewText);
	void OnClicked__DelegateSignature(class UWBP_GuildMemberMenuList_C* Button);
	void GetBindedTextString(class FString* OutString);
	void ExecuteUbergraph_WBP_GuildMemberMenuList(int32 EntryPoint);
	void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_GuildMemberMenuList_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_GuildMemberMenuList_C">();
	}
	static class UWBP_GuildMemberMenuList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_GuildMemberMenuList_C>();
	}
};
static_assert(alignof(UWBP_GuildMemberMenuList_C) == 0x000008, "Wrong alignment on UWBP_GuildMemberMenuList_C");
static_assert(sizeof(UWBP_GuildMemberMenuList_C) == 0x0002C0, "Wrong size on UWBP_GuildMemberMenuList_C");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, UberGraphFrame) == 0x000278, "Member 'UWBP_GuildMemberMenuList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, Anm_NormalToFocus) == 0x000280, "Member 'UWBP_GuildMemberMenuList_C::Anm_NormalToFocus' has a wrong offset!");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, FocusBase) == 0x000288, "Member 'UWBP_GuildMemberMenuList_C::FocusBase' has a wrong offset!");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, Frame) == 0x000290, "Member 'UWBP_GuildMemberMenuList_C::Frame' has a wrong offset!");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, FrameFlare) == 0x000298, "Member 'UWBP_GuildMemberMenuList_C::FrameFlare' has a wrong offset!");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, Text_Title) == 0x0002A0, "Member 'UWBP_GuildMemberMenuList_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, WBP_PalInvisibleButton) == 0x0002A8, "Member 'UWBP_GuildMemberMenuList_C::WBP_PalInvisibleButton' has a wrong offset!");
static_assert(offsetof(UWBP_GuildMemberMenuList_C, OnClicked) == 0x0002B0, "Member 'UWBP_GuildMemberMenuList_C::OnClicked' has a wrong offset!");

}

