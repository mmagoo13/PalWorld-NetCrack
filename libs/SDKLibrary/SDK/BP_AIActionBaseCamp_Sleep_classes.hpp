#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionBaseCamp_Sleep

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionBaseCamp_Sleep.BP_AIActionBaseCamp_Sleep_C
// 0x0010 (0x01C0 - 0x01B0)
class alignas(0x10) UBP_AIActionBaseCamp_Sleep_C final : public UPalAIActionBaseCampSleep
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionBaseCamp_Sleep(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionBaseCamp_Sleep_C">();
	}
	static class UBP_AIActionBaseCamp_Sleep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionBaseCamp_Sleep_C>();
	}
};
static_assert(alignof(UBP_AIActionBaseCamp_Sleep_C) == 0x000010, "Wrong alignment on UBP_AIActionBaseCamp_Sleep_C");
static_assert(sizeof(UBP_AIActionBaseCamp_Sleep_C) == 0x0001C0, "Wrong size on UBP_AIActionBaseCamp_Sleep_C");
static_assert(offsetof(UBP_AIActionBaseCamp_Sleep_C, UberGraphFrame) == 0x0001B0, "Member 'UBP_AIActionBaseCamp_Sleep_C::UberGraphFrame' has a wrong offset!");

}

