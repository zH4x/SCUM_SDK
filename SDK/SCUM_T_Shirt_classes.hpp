#pragma once

// SCUM (0.1.18.9572) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass T_Shirt.T_Shirt_C
// 0x0000 (0x0780 - 0x0780)
class AT_Shirt_C : public AClothesItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass T_Shirt.T_Shirt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
