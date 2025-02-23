#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CapturePrism

#include "Basic.hpp"

#include "BP_CapturePrism_classes.hpp"
#include "BP_CapturePrism_parameters.hpp"


namespace SDK
{

// Function BP_CapturePrism.BP_CapturePrism_C.DecrementBullet
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_CapturePrism_C::DecrementBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapturePrism_C", "DecrementBullet");

	Params::BP_CapturePrism_C_DecrementBullet Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CapturePrism.BP_CapturePrism_C.GetCaptureLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Level                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::GetCaptureLevel(int32* Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapturePrism_C", "GetCaptureLevel");

	Params::BP_CapturePrism_C_GetCaptureLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;
}


// Function BP_CapturePrism.BP_CapturePrism_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_CapturePrism_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapturePrism_C", "GetEquipSocketName");

	Params::BP_CapturePrism_C_GetEquipSocketName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CapturePrism.BP_CapturePrism_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           ThrowObject                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapturePrism_C", "GetThrowObjectClass");

	Params::BP_CapturePrism_C_GetThrowObjectClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;
}


// Function BP_CapturePrism.BP_CapturePrism_C.On Throw
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CapturePrism_C::On_Throw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapturePrism_C", "On Throw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CapturePrism.BP_CapturePrism_C.OnEndShootAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::OnEndShootAnimation(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapturePrism_C", "OnEndShootAnimation");

	Params::BP_CapturePrism_C_OnEndShootAnimation Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CapturePrism.BP_CapturePrism_C.OnThrowInternal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CapturePrism_C::OnThrowInternal(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CapturePrism_C", "OnThrowInternal");

	Params::BP_CapturePrism_C_OnThrowInternal Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}

}

