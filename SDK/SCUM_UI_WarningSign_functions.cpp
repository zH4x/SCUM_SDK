// SCUM (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWarningType                   warningType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WarningSign_C::InitFromWarningType(EWarningType warningType)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.InitFromWarningType");

	UUI_WarningSign_C_InitFromWarningType_Params fn_params;
	fn_params.warningType = warningType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_WarningSign.UI_WarningSign_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUI_WarningSign_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.Construct");

	UUI_WarningSign_C_Construct_Params fn_params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_WarningSign.UI_WarningSign_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WarningSign_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.Tick");

	UUI_WarningSign_C_Tick_Params fn_params;
	fn_params.MyGeometry = MyGeometry;
	fn_params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


// Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUI_WarningSign_C::ExecuteUbergraph_UI_WarningSign(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_WarningSign.UI_WarningSign_C.ExecuteUbergraph_UI_WarningSign");

	UUI_WarningSign_C_ExecuteUbergraph_UI_WarningSign_Params fn_params;
	fn_params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
