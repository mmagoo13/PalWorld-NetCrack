#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionReaction_ElectricShock

#include "Basic.hpp"

#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionReaction_ElectricShock.BP_AIActionReaction_ElectricShock_C
// 0x0010 (0x0140 - 0x0130)
class UBP_AIActionReaction_ElectricShock_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalActionBase*                         TempAction;                                        // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionReaction_ElectricShock(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionReaction_ElectricShock_C">();
	}
	static class UBP_AIActionReaction_ElectricShock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionReaction_ElectricShock_C>();
	}
};
static_assert(alignof(UBP_AIActionReaction_ElectricShock_C) == 0x000008, "Wrong alignment on UBP_AIActionReaction_ElectricShock_C");
static_assert(sizeof(UBP_AIActionReaction_ElectricShock_C) == 0x000140, "Wrong size on UBP_AIActionReaction_ElectricShock_C");
static_assert(offsetof(UBP_AIActionReaction_ElectricShock_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIActionReaction_ElectricShock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIActionReaction_ElectricShock_C, TempAction) == 0x000138, "Member 'UBP_AIActionReaction_ElectricShock_C::TempAction' has a wrong offset!");

}

