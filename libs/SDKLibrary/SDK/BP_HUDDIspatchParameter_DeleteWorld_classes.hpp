#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HUDDIspatchParameter_DeleteWorld

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HUDDIspatchParameter_DeleteWorld.BP_HUDDIspatchParameter_DeleteWorld_C
// 0x0008 (0x0040 - 0x0038)
class UBP_HUDDIspatchParameter_DeleteWorld_C final : public UPalHUDDispatchParameterBase
{
public:
	bool                                          IsConfirm;                                         // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HUDDIspatchParameter_DeleteWorld_C">();
	}
	static class UBP_HUDDIspatchParameter_DeleteWorld_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_HUDDIspatchParameter_DeleteWorld_C>();
	}
};
static_assert(alignof(UBP_HUDDIspatchParameter_DeleteWorld_C) == 0x000008, "Wrong alignment on UBP_HUDDIspatchParameter_DeleteWorld_C");
static_assert(sizeof(UBP_HUDDIspatchParameter_DeleteWorld_C) == 0x000040, "Wrong size on UBP_HUDDIspatchParameter_DeleteWorld_C");
static_assert(offsetof(UBP_HUDDIspatchParameter_DeleteWorld_C, IsConfirm) == 0x000038, "Member 'UBP_HUDDIspatchParameter_DeleteWorld_C::IsConfirm' has a wrong offset!");

}

