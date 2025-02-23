#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Pal_StatusElement

#include "Basic.hpp"

#include "WBP_MainMenu_Pal_StatusElement_classes.hpp"
#include "WBP_MainMenu_Pal_StatusElement_parameters.hpp"


namespace SDK
{

// Function WBP_MainMenu_Pal_StatusElement.WBP_MainMenu_Pal_StatusElement_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         ElementType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_StatusElement_C::Setup(EPalElementType ElementType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_StatusElement_C", "Setup");

	Params::WBP_MainMenu_Pal_StatusElement_C_Setup Parms{};

	Parms.ElementType = ElementType;

	UObject::ProcessEvent(Func, &Parms);
}

}

