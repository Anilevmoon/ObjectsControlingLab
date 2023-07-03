#pragma once
#include <string>
#include <iostream>
#include <map>
#include "FouthExersice.h"

class TBaseParentMan : public TCommon {
	public:
	TBaseParentMan() = default;
	TBaseParentMan(std::string name) : m_sName(name) {}

	virtual ~TBaseParentMan() = default;

	public:
	virtual std::string Name();
	virtual std::string ToString();
	std::string m_sName;

};

class TAsianMan : public TBaseParentMan {
	public:
	TAsianMan(std::string name) {m_sName = name;}

	virtual ~TAsianMan() = default;

	public:
	virtual std::string Name() override;
	virtual std::string  ToString();


};

class TAfricanMan : public TBaseParentMan {
	public:
	TAfricanMan(std::string name) {m_sName = name;}

	virtual ~TAfricanMan() = default;

	public:
	virtual std::string Name() override;
	virtual std::string ToString();

};

class TWhiteMan : public TBaseParentMan {
	public:
	TWhiteMan(std::string name) {m_sName = name;}

	virtual ~TWhiteMan() = default;

	public:
	virtual std::string Name() override;
	virtual std::string ToString();
};