#pragma once
#include <array>
#include <iostream>

class TCommon {
	public:
	TCommon() = default;
	virtual ~TCommon() = default;
	virtual std::string ToString() { return "Common Empty Object"; }
};
