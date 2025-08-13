#pragma once
#include <iostream>
#include "CLivingThings.h"
using namespace std;

class CAnimal : public CLivingThings
{
public:

	CAnimal()  : CLivingThings(50)
	{
		cout << "CAnimal::CAnimal()" << endl;
	}

	CAnimal(int age) : CLivingThings(age)
	{
		
		cout << "CAnimal::CAnimal(int age)" << endl;
	}


	~CAnimal()
	{
		cout << "CAnimal::~CAnimal()" << endl;
	}


	// only parents have
	void OpenEye()
	{
		// 눈꺼풀에 힘주기()
		cout << "Animal::OepnEye() ~~~~~" << endl;
	}

	// virtual method
	virtual void Speak()
	{
		cout << "Animal::Speak() ~~~~~~" << endl;
	}

	virtual void Walk()
	{
		cout << "Animal::Walk() working now" << endl;
	}

	// nomal method
	virtual void KeepsHome()
	{
		cout << "Animal::KeepsHome() ~~~~~~" << endl;
	}

	virtual void Move()
	{
		cout << "CAnimal::Move()" << endl;
	}

	void Breath()
	{
		cout << "CAnimal::Breath()" << endl;
	}

	int nX;
};


