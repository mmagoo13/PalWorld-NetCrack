#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalBulletCreator

#include "Basic.hpp"

#include "BP_PalBulletCreator_classes.hpp"
#include "BP_PalBulletCreator_parameters.hpp"


namespace SDK
{

// Function BP_PalBulletCreator.BP_PalBulletCreator_C.CreateBullet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          WorldContextObject                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class APalBullet>           BulletClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FTransform                       SpawnTransform                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESpawnActorCollisionHandlingMethod      CollisionHandlingOverride                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Owner                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                            Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                       ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class APalBullet* UBP_PalBulletCreator_C::CreateBullet(const class UObject* WorldContextObject, class APalWeaponBase* Weapon, TSubclassOf<class APalBullet> BulletClass, const struct FTransform& SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner, class APawn* Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBulletCreator_C", "CreateBullet");

	Params::BP_PalBulletCreator_C_CreateBullet Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Weapon = Weapon;
	Parms.BulletClass = BulletClass;
	Parms.SpawnTransform = std::move(SpawnTransform);
	Parms.CollisionHandlingOverride = CollisionHandlingOverride;
	Parms.Owner = Owner;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

