#include "SecondExresice.h"

std::string TDistributionContainer::ToString() {

	std::string result = "";
	result += "TDistributionGenerator, Result Vector: \n";
	if(Data.size()!=0) {

		float sum = 0.0f;
		for(auto& count:Data) {
			result += "  "+std::to_string(count)+"  ";
			sum+=count;
		}
		result += "\n   Sum = " +std::to_string(sum) +"\n";

	} else {
		result +="Has no result, yet\n";
	}
	return result;
}


void TDistributionGenerator::RandomNumbersEqalToOne() {
	

	float someNumber;
	float clearRange = 1.0f;
	bool isCompleted = false;
	
	static std::random_device mt{};
	static std::uniform_real_distribution<float> range{ 0.0f, clearRange };

	while(!isCompleted) {
		someNumber = range(mt);
		if(clearRange-someNumber>0.0f) {
			m_conteiner.Data.push_back(someNumber);
			clearRange -=someNumber;
		} else {
			m_conteiner.Data.push_back(clearRange);
			isCompleted = true;
		}
	}
}


void TDistributionGenerator::OLDRandomNumbersEqalToOne() {
	static std::random_device mt{};
	static std::uniform_real_distribution<float> range{ 0.0f, 1.0f };

	float someNumber;
	float sum = 0.0f;
	bool isCompleted = false;

	while(!isCompleted) {
		someNumber = range(mt);
		if(sum+someNumber<1.0f) {
			m_conteiner.Data.push_back(someNumber);
			sum+=someNumber;
		} else {
			someNumber = 1-sum;
			m_conteiner.Data.push_back(someNumber);
			isCompleted = true;
		}
	}
}
