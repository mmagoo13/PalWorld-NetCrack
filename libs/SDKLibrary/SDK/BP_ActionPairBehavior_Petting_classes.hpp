#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionPairBehavior_Petting

#include "Basic.hpp"

#include "BP_ActionPairBehaviorBase_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionPairBehavior_Petting.BP_ActionPairBehavior_Petting_C
// 0x0000 (0x0260 - 0x0260)
class UBP_ActionPairBehavior_Petting_C final : public UBP_ActionPairBehaviorBase_C
{
public:
	void GetHumanAnime(class UAnimMontage** Montage);
	void OnCompleted(class AActor* Human, class AActor* Monster);
	class UNiagaraComponent* SpawnNiagara(const struct FVector& Location, class UObject* Object);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionPairBehavior_Petting_C">();
	}
	static class UBP_ActionPairBehavior_Petting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionPairBehavior_Petting_C>();
	}
};
static_assert(alignof(UBP_ActionPairBehavior_Petting_C) == 0x000010, "Wrong alignment on UBP_ActionPairBehavior_Petting_C");
static_assert(sizeof(UBP_ActionPairBehavior_Petting_C) == 0x000260, "Wrong size on UBP_ActionPairBehavior_Petting_C");

}

