#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalPlayerDataCharacterMake

#include "Basic.hpp"

#include "BP_PalPlayerDataCharacterMake_classes.hpp"
#include "BP_PalPlayerDataCharacterMake_parameters.hpp"


namespace SDK
{

// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.CalcSubsurfaceColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     OriginalRGB                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     SubsurfaceRGB                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::CalcSubsurfaceColor(const struct FLinearColor& OriginalRGB, struct FLinearColor* SubsurfaceRGB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "CalcSubsurfaceColor");

	Params::BP_PalPlayerDataCharacterMake_C_CalcSubsurfaceColor Parms{};

	Parms.OriginalRGB = std::move(OriginalRGB);

	UObject::ProcessEvent(Func, &Parms);

	if (SubsurfaceRGB != nullptr)
		*SubsurfaceRGB = std::move(Parms.SubsurfaceRGB);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.ConvertMakeInfo_HSVToRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfo  MakeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  SVLimit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfo  ConvertedMakeInfo                                      (Parm, OutParm)

void UBP_PalPlayerDataCharacterMake_C::ConvertMakeInfo_HSVToRGB(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, double SVLimit, struct FPalPlayerDataCharacterMakeInfo* ConvertedMakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "ConvertMakeInfo_HSVToRGB");

	Params::BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_HSVToRGB Parms{};

	Parms.MakeInfo = std::move(MakeInfo);
	Parms.SVLimit = SVLimit;

	UObject::ProcessEvent(Func, &Parms);

	if (ConvertedMakeInfo != nullptr)
		*ConvertedMakeInfo = std::move(Parms.ConvertedMakeInfo);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.ConvertMakeInfo_RGBToHSV
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPalPlayerDataCharacterMakeInfo  MakeInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// double                                  SVLimitValur                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfo  ConvertedMakeInfo                                      (Parm, OutParm)

void UBP_PalPlayerDataCharacterMake_C::ConvertMakeInfo_RGBToHSV(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo, double SVLimitValur, struct FPalPlayerDataCharacterMakeInfo* ConvertedMakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "ConvertMakeInfo_RGBToHSV");

	Params::BP_PalPlayerDataCharacterMake_C_ConvertMakeInfo_RGBToHSV Parms{};

	Parms.MakeInfo = std::move(MakeInfo);
	Parms.SVLimitValur = SVLimitValur;

	UObject::ProcessEvent(Func, &Parms);

	if (ConvertedMakeInfo != nullptr)
		*ConvertedMakeInfo = std::move(Parms.ConvertedMakeInfo);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetBodyShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             BodyMeshName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutRGB                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetBodyShiftRGB(class FName BodyMeshName, struct FLinearColor* OutRGB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetBodyShiftRGB");

	Params::BP_PalPlayerDataCharacterMake_C_GetBodyShiftRGB Parms{};

	Parms.BodyMeshName = BodyMeshName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetBrowShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             HairMeshName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutRGB                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetBrowShiftRGB(class FName HairMeshName, struct FLinearColor* OutRGB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetBrowShiftRGB");

	Params::BP_PalPlayerDataCharacterMake_C_GetBrowShiftRGB Parms{};

	Parms.HairMeshName = HairMeshName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetEyeShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             HeadMeshName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             EyeMaterialName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutRGB                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetEyeShiftRGB(class FName HeadMeshName, class FName EyeMaterialName, struct FLinearColor* OutRGB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetEyeShiftRGB");

	Params::BP_PalPlayerDataCharacterMake_C_GetEyeShiftRGB Parms{};

	Parms.HeadMeshName = HeadMeshName;
	Parms.EyeMaterialName = EyeMaterialName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetHairShiftRGB
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             HairMeshName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutRGB                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetHairShiftRGB(class FName HairMeshName, struct FLinearColor* OutRGB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetHairShiftRGB");

	Params::BP_PalPlayerDataCharacterMake_C_GetHairShiftRGB Parms{};

	Parms.HairMeshName = HairMeshName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetOriginalPresetMakeInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             PresetName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfo  OutMakeInfo                                            (Parm, OutParm)

void UBP_PalPlayerDataCharacterMake_C::GetOriginalPresetMakeInfo(class FName PresetName, struct FPalPlayerDataCharacterMakeInfo* OutMakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetOriginalPresetMakeInfo");

	Params::BP_PalPlayerDataCharacterMake_C_GetOriginalPresetMakeInfo Parms{};

	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMakeInfo != nullptr)
		*OutMakeInfo = std::move(Parms.OutMakeInfo);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetPresetMakeInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          WorldContextObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             PresetName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalPlayerDataCharacterMakeInfo  OutMakeInfo                                            (Parm, OutParm)

void UBP_PalPlayerDataCharacterMake_C::GetPresetMakeInfo(class UObject* WorldContextObject, const class FName& PresetName, struct FPalPlayerDataCharacterMakeInfo* OutMakeInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetPresetMakeInfo");

	Params::BP_PalPlayerDataCharacterMake_C_GetPresetMakeInfo Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PresetName = PresetName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMakeInfo != nullptr)
		*OutMakeInfo = std::move(Parms.OutMakeInfo);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RecalcHSV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     BaseHSV                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ShiftRGB                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  SVLimit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutHSV                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::RecalcHSV(const struct FLinearColor& BaseHSV, const struct FLinearColor& ShiftRGB, double SVLimit, struct FLinearColor* OutHSV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "RecalcHSV");

	Params::BP_PalPlayerDataCharacterMake_C_RecalcHSV Parms{};

	Parms.BaseHSV = std::move(BaseHSV);
	Parms.ShiftRGB = std::move(ShiftRGB);
	Parms.SVLimit = SVLimit;

	UObject::ProcessEvent(Func, &Parms);

	if (OutHSV != nullptr)
		*OutHSV = std::move(Parms.OutHSV);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RecalcRGB
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     InHSV                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ShiftRGB                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  SVLimit                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutRGB                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::RecalcRGB(const struct FLinearColor& InHSV, const struct FLinearColor& ShiftRGB, double SVLimit, struct FLinearColor* OutRGB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "RecalcRGB");

	Params::BP_PalPlayerDataCharacterMake_C_RecalcRGB Parms{};

	Parms.InHSV = std::move(InHSV);
	Parms.ShiftRGB = std::move(ShiftRGB);
	Parms.SVLimit = SVLimit;

	UObject::ProcessEvent(Func, &Parms);

	if (OutRGB != nullptr)
		*OutRGB = std::move(Parms.OutRGB);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.RGBToHSV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                     InRGB                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutHSV                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::RGBToHSV(const struct FLinearColor& InRGB, struct FLinearColor* OutHSV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "RGBToHSV");

	Params::BP_PalPlayerDataCharacterMake_C_RGBToHSV Parms{};

	Parms.InRGB = std::move(InRGB);

	UObject::ProcessEvent(Func, &Parms);

	if (OutHSV != nullptr)
		*OutHSV = std::move(Parms.OutHSV);
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomBodyMeshName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalPlayerDataCharacterMake_C::GetRandomBodyMeshName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomBodyMeshName");

	Params::BP_PalPlayerDataCharacterMake_C_GetRandomBodyMeshName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomHairMeshName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalPlayerDataCharacterMake_C::GetRandomHairMeshName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomHairMeshName");

	Params::BP_PalPlayerDataCharacterMake_C_GetRandomHairMeshName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomHeadMeshName
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalPlayerDataCharacterMake_C::GetRandomHeadMeshName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomHeadMeshName");

	Params::BP_PalPlayerDataCharacterMake_C_GetRandomHeadMeshName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalPlayerDataCharacterMake.BP_PalPlayerDataCharacterMake_C.GetRandomRawNameByDataTable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             RawName                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalPlayerDataCharacterMake_C::GetRandomRawNameByDataTable(class UDataTable* DataTable, class FName* RawName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalPlayerDataCharacterMake_C", "GetRandomRawNameByDataTable");

	Params::BP_PalPlayerDataCharacterMake_C_GetRandomRawNameByDataTable Parms{};

	Parms.DataTable = DataTable;

	UObject::ProcessEvent(Func, &Parms);

	if (RawName != nullptr)
		*RawName = Parms.RawName;
}

}

