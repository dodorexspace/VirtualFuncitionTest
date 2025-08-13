#pragma once
#include "CLivingThings.h"
class CPlant : public CLivingThings
{
public:
	virtual void Photosynthesis()
	{
		cout << "CPlant::Photosynthesis()" << endl;
	}

	void Breath()
	{
		cout << "CPlant::Breath()" << endl;
	}
};

