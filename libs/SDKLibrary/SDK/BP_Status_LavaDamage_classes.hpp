#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_LavaDamage

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_LavaDamage.BP_Status_LavaDamage_C
// 0x0028 (0x0070 - 0x0048)
class UBP_Status_LavaDamage_C final : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           Timer;                                             // 0x0050(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        DurationTimer_BP;                                  // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   KeyName;                                           // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        DamageRate;                                        // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_LavaDamage(int32 EntryPoint);
	int32 GetLavaDamage();
	void HasSelfPalElement(EPalElementType MyElement, bool* Has);
	void LavaDamage();
	void OnBeginStatus();
	void OnCompleteInitializeParameter(class APalCharacter* InCharacter);
	void OnEndStatus();
	void Setup();
	void TickStatus(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_LavaDamage_C">();
	}
	static class UBP_Status_LavaDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_LavaDamage_C>();
	}
};
static_assert(alignof(UBP_Status_LavaDamage_C) == 0x000008, "Wrong alignment on UBP_Status_LavaDamage_C");
static_assert(sizeof(UBP_Status_LavaDamage_C) == 0x000070, "Wrong size on UBP_Status_LavaDamage_C");
static_assert(offsetof(UBP_Status_LavaDamage_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_LavaDamage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Status_LavaDamage_C, Timer) == 0x000050, "Member 'UBP_Status_LavaDamage_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_Status_LavaDamage_C, DurationTimer_BP) == 0x000058, "Member 'UBP_Status_LavaDamage_C::DurationTimer_BP' has a wrong offset!");
static_assert(offsetof(UBP_Status_LavaDamage_C, KeyName) == 0x000060, "Member 'UBP_Status_LavaDamage_C::KeyName' has a wrong offset!");
static_assert(offsetof(UBP_Status_LavaDamage_C, DamageRate) == 0x000068, "Member 'UBP_Status_LavaDamage_C::DamageRate' has a wrong offset!");

}

