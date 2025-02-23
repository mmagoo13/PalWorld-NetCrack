#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_NormalBullet

#include "Basic.hpp"

#include "BP_AttackBulletBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NormalBullet.BP_NormalBullet_C
// 0x0010 (0x0380 - 0x0370)
class ABP_NormalBullet_C : public ABP_AttackBulletBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_NormalBullet_C;                  // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   One4_5_x_114_mm_Bullet;                            // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_NormalBullet(int32 EntryPoint);
	void GetHitEffect(class UNiagaraSystem** NiagaraEffect);
	void OnDestroy(class UPrimitiveComponent* HitComp, class AActor* OtherCharacter, class UPrimitiveComponent* OtherComp, const struct FHitResult& Hit);
	void SpawnHitEffects(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal);
	void SpawnHitEffectsInStun(const struct FVector& ImpactPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NormalBullet_C">();
	}
	static class ABP_NormalBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NormalBullet_C>();
	}
};
static_assert(alignof(ABP_NormalBullet_C) == 0x000008, "Wrong alignment on ABP_NormalBullet_C");
static_assert(sizeof(ABP_NormalBullet_C) == 0x000380, "Wrong size on ABP_NormalBullet_C");
static_assert(offsetof(ABP_NormalBullet_C, UberGraphFrame_BP_NormalBullet_C) == 0x000370, "Member 'ABP_NormalBullet_C::UberGraphFrame_BP_NormalBullet_C' has a wrong offset!");
static_assert(offsetof(ABP_NormalBullet_C, One4_5_x_114_mm_Bullet) == 0x000378, "Member 'ABP_NormalBullet_C::One4_5_x_114_mm_Bullet' has a wrong offset!");

}

