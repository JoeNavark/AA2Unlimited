#pragma once

#include "Value.h"

#include <Windows.h>
#include <string>
#include <vector>

namespace Shared {
namespace Triggers {



class NamedConstant {
public:
	DWORD id;								//a unique identifier. This id is only unique inside the class it is used in, not accross all eev's
	int category;							//category is a string that is appended in the gui for easier navigation
	std::wstring name;						//a name, visible from the dropdown menu
	std::wstring interactiveName;			//name in the gui; parameters are replaced by %ps and can be clicked to be changed
	std::wstring description;				//description

	Value val;

	static const NamedConstant* NamedConstant::FromId(Types type,int id);
};

enum NamedConstantCategories {
	NCONSTCAT_RELATIONSHIP,
	NCONSTCAT_CONVERSATIONS,
	NCONSTCAT_TRAIT,
	NCONSTCAT_TIME_DAY,
	NCONSTCAT_TIME_PERIOD,
	NCONSTCAT_CHAR_PREG_RISK,
	NCONSTCAT_EVENT_TYPE,
	NCONSTCAT_MOOD,
	NCONSTCAT_PREFERENCE,
	NCONSTCAT_OPINIONS,
	NCONSTCAT_N
};

extern std::wstring g_NamedConstantCategories[NCONSTCAT_N];
extern std::vector<NamedConstant> g_NamedConstants[N_TYPES];

inline const NamedConstant* NamedConstant::FromId(Types type,int id) {
	if (type < 0 || type >= N_TYPES) return NULL;
	for (int i = 0; i < g_NamedConstants[type].size(); i++) {
		if (g_NamedConstants[type][i].id == id) {
			return &g_NamedConstants[type][i];
		}
	}
	if (id < 1 || id > g_NamedConstants[type].size()) return NULL;
	return &g_NamedConstants[type][id-1];
}

}
}