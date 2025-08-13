#pragma once
#include "CHumanEatingPlant.h"
class CMada : public CHumanEatingPlant
{
	void Breath()
	{
		cout << "Mada::Breath() .............with leaf,photosynthesis, no sound" << endl;
	}

	void Kick()
	{	
		cout << "Mada:: no kick, no leg, no sound" << endl;
	}
};

