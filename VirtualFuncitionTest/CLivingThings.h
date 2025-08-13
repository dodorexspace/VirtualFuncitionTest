#pragma once
#include <iostream>
using namespace std;

class CLivingThings
{
public:
	CLivingThings(): nHelth(100) 
	{
		cout << "CLivingThings::CLivingThings()" << endl;
		nHelth = 100;
	}

	CLivingThings(int i) : nHelth(i)
	{
		cout << "CLivingThings::CLivingThings(" << i << ")" << endl;
		nHelth = 100;
	}

	virtual ~CLivingThings()
	{
		cout << "CLivingThings::~CLivingThings()" << endl;
	}

	bool IsLiving()
	{
		return true;
	}

	virtual void Breath()
	{
		cout << "CLivingThings:: Breath anyway with lung, leaf, skin, etc" << endl;
	}

	//virtual void Kick()
	//{
	//	cout << "CLivingThings: default kick!!" << endl;
	//}

	int nHelth;
};

