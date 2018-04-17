#pragma once

#include "stdafx.h"
#include "AquariumFauna.h"

class FaunaList
{
private:
	AquariumFauna theList[100];
	int listSize;
public:
	FaunaList();
	bool isDuplicate(AquariumFauna &fauna);
	void addFauna(AquariumFauna &fauna);
	void displayList();
};
