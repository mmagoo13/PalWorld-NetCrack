#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Bp_Action_AliveRagdollTimer

#include "Basic.hpp"

#include "Bp_Action_AliveRagdollTimer_classes.hpp"
#include "Bp_Action_AliveRagdollTimer_parameters.hpp"


namespace SDK
{

// Function Bp_Action_AliveRagdollTimer.Bp_Action_AliveRagdollTimer_C.ExecuteUbergraph_Bp_Action_AliveRagdollTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBp_Action_AliveRagdollTimer_C::ExecuteUbergraph_Bp_Action_AliveRagdollTimer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_Action_AliveRagdollTimer_C", "ExecuteUbergraph_Bp_Action_AliveRagdollTimer");

	Params::Bp_Action_AliveRagdollTimer_C_ExecuteUbergraph_Bp_Action_AliveRagdollTimer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Bp_Action_AliveRagdollTimer.Bp_Action_AliveRagdollTimer_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBp_Action_AliveRagdollTimer_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Bp_Action_AliveRagdollTimer_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

