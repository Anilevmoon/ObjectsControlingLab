#include "FirstExercise.h"
#include "SecondExresice.h"
#include "ThirdExersice.h"

int main() {

	//FIRST EXERSICE
	std::shared_ptr<TBaseFirst> childPtr = std::make_shared<TDerivedFirst>();
	auto parentTypePtr = childPtr;
	auto childPtrCopy = childPtr;
	childPtr = nullptr;								  //Nulling ptr


	//SECOND EXERSICE
	auto generator = std::make_shared<TDistributionGenerator>();
	generator->RandomNumbersEqalToOne();
	auto conteinerPointer = std::make_shared<TDistributionContainer>(generator->m_conteiner);


	//generator->VectorPrint();										//Individual Print for exercise 2


	//THIRD EXERSICE
	auto asianManFirst = std::make_shared<TAsianMan>("Oleg");			
	auto asianManSecond = std::make_shared<TAsianMan>("Samurai");

	auto whiteManFirst = std::make_shared<TWhiteMan>("Dima");
	auto whiteManSecond = std::make_shared<TWhiteMan>("Serhii");

	auto africanManFirst = std::make_shared<TAfricanMan>("Daniel");
	auto africanManSecond = std::make_shared<TAfricanMan>("Andrii");
	auto africanManThird = std::make_shared<TAfricanMan>("Myhailo");

	std::map<std::string, std::shared_ptr<TBaseParentMan>> AllMansArray ={

		{asianManFirst->m_sName, asianManFirst},
		{asianManSecond->m_sName, asianManSecond},
		
		{whiteManFirst->m_sName, whiteManFirst},
		{whiteManSecond->m_sName, whiteManSecond},
		
		{africanManFirst->m_sName, africanManFirst},
		{africanManSecond->m_sName, africanManSecond},
		{africanManThird->m_sName, africanManThird}

	};

	//std::cout<<"\n Third Exercise: "<<std::endl;												
	//for(auto it:AllMansArray) {												//Individual Print for exercise 3
	//	std::cout<<it.second->Name()<<std::endl;
	//}


	//FOUGHT EXERSICE
	std::array<std::shared_ptr<TCommon>, 10> AllObjectsArray = {
		childPtrCopy,
		parentTypePtr,
		conteinerPointer,
		asianManFirst,
		asianManSecond,
		whiteManFirst,
		whiteManSecond,
		africanManFirst,
		africanManSecond,
		africanManThird
	};

	std::cout<<" All Objects to String: \n"<<std::endl;

	auto counter = 0;
	for(auto &object:AllObjectsArray) {
		++counter;
		std::cout<<counter<<". "<<object->ToString();
	}
	return 0;
}
