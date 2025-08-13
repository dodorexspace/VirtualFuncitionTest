#pragma once
#include "CAnimal.h"


class CDog : public CAnimal
{
public:
	CDog() 
	{
		cout << "CDog::CDog()" << endl;
		nEyes = 2;
	}

	CDog(int age) : CAnimal(age)
	{
		cout << "CDog::CDog()" << endl;
		nEyes = 2;
	}

	~CDog()
	{
		cout << "CDog::~CDog()" << endl;
	}	

	// virual method overrided
	void Speak()
	{
		CAnimal::Speak();
		//////////////////////////
		cout << "Dog::Speak() Woof!" << endl;


	}

	// normal method voerrided
	void KeepsHome()
	{
		cout << "Dog::KeepsHome()" << endl;


		//////////////////////////
		CAnimal::KeepsHome();
	}

	void OpenEye()
	{
		CAnimal::OpenEye();
		cout << "Dog::DownEyeborow" << endl;
	}

	void Breath()
	{
		cout << "Dog:: huk huk huk huk ...." << endl;
	}

	void Kick()
	{
		cout << "Dong:: kik kik kik kik" << endl;
	}

	int nEyes;

};
