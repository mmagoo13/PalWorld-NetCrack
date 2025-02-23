#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PalInGameMenuItemSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_PalItemSlotBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_PalInGameMenuItemSlot.WBP_PalInGameMenuItemSlot_C
// 0x0018 (0x04B8 - 0x04A0)
class UWBP_PalInGameMenuItemSlot_C final : public UWBP_PalItemSlotBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_WBP_PalInGameMenuItemSlot_C;        // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalTextBlock_C*                     Text_ItemNum;                                      // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemIcon_C*           WBP_PalInGameMenuItemIcon;                         // 0x04B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void EmptySlotEvent();
	void ExecuteUbergraph_WBP_PalInGameMenuItemSlot(int32 EntryPoint);
	void UpdateSlotEvent(class UPalItemSlot* Param_TargetSlot);
	void ValidSlotEvent();
	void OnInitialized();
	void RegisterItemIconWidget(class UWBP_PalItemIconBase_C** IconWidget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_PalInGameMenuItemSlot_C">();
	}
	static class UWBP_PalInGameMenuItemSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_PalInGameMenuItemSlot_C>();
	}
};
static_assert(alignof(UWBP_PalInGameMenuItemSlot_C) == 0x000008, "Wrong alignment on UWBP_PalInGameMenuItemSlot_C");
static_assert(sizeof(UWBP_PalInGameMenuItemSlot_C) == 0x0004B8, "Wrong size on UWBP_PalInGameMenuItemSlot_C");
static_assert(offsetof(UWBP_PalInGameMenuItemSlot_C, UberGraphFrame_WBP_PalInGameMenuItemSlot_C) == 0x0004A0, "Member 'UWBP_PalInGameMenuItemSlot_C::UberGraphFrame_WBP_PalInGameMenuItemSlot_C' has a wrong offset!");
static_assert(offsetof(UWBP_PalInGameMenuItemSlot_C, Text_ItemNum) == 0x0004A8, "Member 'UWBP_PalInGameMenuItemSlot_C::Text_ItemNum' has a wrong offset!");
static_assert(offsetof(UWBP_PalInGameMenuItemSlot_C, WBP_PalInGameMenuItemIcon) == 0x0004B0, "Member 'UWBP_PalInGameMenuItemSlot_C::WBP_PalInGameMenuItemIcon' has a wrong offset!");

}

