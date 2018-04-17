#include "stdafx.h"
#include "FaunaList.h"

FaunaList::FaunaList()
{
	listSize = 0;
}
//Iterates through array to see if user enters a species that is already present in the array.
bool FaunaList::isDuplicate(AquariumFauna &fauna)
{
	int count;

	for (count = 0; count < listSize; count++)
	{
		if (fauna.getSpecies() == theList[count].getSpecies())
			cout << "You already have this fish. Please enter another kind.\n";
			return true;
	}
	cout << "Test\n\n";
	return false;
}
//Adds user's species to an array.
void FaunaList::addFauna(AquariumFauna &fauna)
{
	//need to check if getFauna was succesful on theList[listSize]. If so increment the listSize.
	theList[listSize] = fauna;
	listSize++;
}
//Shows list of user's entered species.
void FaunaList::displayList()
{
	int count;

	for (count = 0; count < listSize; count++)
	{
		cout << theList[count];
		cout << endl;
	}
}