#include "ThirdExersice.h"

std::string TBaseParentMan::Name() { return m_sName; }
std::string TBaseParentMan::ToString() { return "BaseParentMan, NoName\n"; }


std::string TAsianMan::Name() { return "Chong"+m_sName; }
std::string TAsianMan::ToString() { return "AsianMan inherited from BaseParentMan, Name: "+Name() + "\n"; }


std::string TAfricanMan::Name() { return "Afro"+m_sName; }
std::string TAfricanMan::ToString() { return "AfricanMan inherited from BaseParentMan, Name: " + Name()+"\n"; }


std::string TWhiteMan::Name() { return "Mister"+m_sName; }
std::string TWhiteMan::ToString() { return "WhiteMan inherited from BaseParentMan, Name: " + Name()+"\n"; }