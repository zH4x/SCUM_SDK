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

// Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillTemplate          SkillTemplate                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_CriminalRecordSkill_C::InitFromSkillTemplate(const struct FSkillTemplate& SkillTemplate)
{
	static auto fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate");

	UUI_CriminalRecordSkill_C_InitFromSkillTemplate_Params fn_params;
	fn_params.SkillTemplate = SkillTemplate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &fn_params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
