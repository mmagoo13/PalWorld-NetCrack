#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIController_Interface_Invader

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AIController_Interface_Invader.BP_AIController_Interface_Invader_C.BindOnInvaderArrivedDelegate
// 0x0010 (0x0010 - 0x0000)
struct BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate final
{
public:
	TDelegate<void()>                             Event;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate) == 0x000004, "Wrong alignment on BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate");
static_assert(sizeof(BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate) == 0x000010, "Wrong size on BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate");
static_assert(offsetof(BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate, Event) == 0x000000, "Member 'BP_AIController_Interface_Invader_C_BindOnInvaderArrivedDelegate::Event' has a wrong offset!");

}

