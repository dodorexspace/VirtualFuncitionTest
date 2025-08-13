#pragma once
#include "CPlant.h"
#include "CAnimal.h"

class CEuglena : public CPlant, public CAnimal
{
public:
	void Move()
	{
		cout << "CEuglena::Move()" << endl;
	}

	void Photosynthesis()
	{
		cout << "CEuglena::Photosynthesis()" << endl;
	}

	void Breath()
	{
		CAnimal::Breath();
		cout << "CEuglena::Breath()" << endl;
	}

};

