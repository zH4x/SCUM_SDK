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

// Function Sledgehammer.Sledgehammer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASledgehammer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sledgehammer.Sledgehammer_C.UserConstructionScript");

	ASledgehammer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
