#pragma once
#include <vector>
#include <string>  
#include <random>
#include <iostream>
#include "FouthExersice.h"

struct TDistributionContainer : TCommon {
	std::vector<float> Data;

	virtual std::string ToString() override;
};

class TDistributionGenerator {
	public:
	TDistributionGenerator() {};
	virtual ~TDistributionGenerator() = default;

	public:
	TDistributionContainer m_conteiner;
	void RandomNumbersEqalToOne();
	void OLDRandomNumbersEqalToOne();
};


