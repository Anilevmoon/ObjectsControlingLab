#pragma once
#include <iostream>
#include "FouthExersice.h"

class TBaseFirst : public TCommon{
	public:
	virtual std::string  ToString() {return "TBaseFirst (Empty)\n"; }
};

class TDerivedFirst : public TBaseFirst {
	public:
	virtual std::string  ToString() { return "TDerivedFirst inherited from TBaseFirst (Empty)\n"; }

};
