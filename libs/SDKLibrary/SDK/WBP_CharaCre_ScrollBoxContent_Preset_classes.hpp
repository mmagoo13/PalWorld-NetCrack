#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Preset

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "WBP_CharaCre_ScrollBoxContentBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Preset.WBP_CharaCre_ScrollBoxContent_Preset_C
// 0x0020 (0x0448 - 0x0428)
class UWBP_CharaCre_ScrollBoxContent_Preset_C final : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                               WrapBox_Preset;                                    // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectedPreset;                                  // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void Construct();
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Preset(int32 EntryPoint);
	void GetRestoreFocusTarget(class UWidget** Widget);
	void OnClickedPresetButton_Internal(class UWBP_CharaCre_PresetButton_C* Widget);
	void OnSelectedPreset__DelegateSignature(class FName PresetName);
	void GetTopFocusTarget(class UWidget** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ScrollBoxContent_Preset_C">();
	}
	static class UWBP_CharaCre_ScrollBoxContent_Preset_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ScrollBoxContent_Preset_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ScrollBoxContent_Preset_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ScrollBoxContent_Preset_C");
static_assert(sizeof(UWBP_CharaCre_ScrollBoxContent_Preset_C) == 0x000448, "Wrong size on UWBP_CharaCre_ScrollBoxContent_Preset_C");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Preset_C, UberGraphFrame) == 0x000428, "Member 'UWBP_CharaCre_ScrollBoxContent_Preset_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Preset_C, WrapBox_Preset) == 0x000430, "Member 'UWBP_CharaCre_ScrollBoxContent_Preset_C::WrapBox_Preset' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Preset_C, OnSelectedPreset) == 0x000438, "Member 'UWBP_CharaCre_ScrollBoxContent_Preset_C::OnSelectedPreset' has a wrong offset!");

}

