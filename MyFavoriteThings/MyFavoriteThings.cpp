// MyFavoriteThings.cpp : Defines the entry point for the console application.
//A program by Rickey Morris that creates objects and stores their information in an array.

#include "stdafx.h"
#include "AquariumFauna.h"
#include "FaunaList.h"
using namespace std;

int main()
{
	char again;
	FaunaList myList;
	
	cout << "Welcome! This program will allow you to keep a record of fish that you purchased for your aquarium.\n";
	
	do
	{
		AquariumFauna test;
		bool duplicate = true;
		//Program does not progress past the while loop unless the user enters a species that is not present in the array.
		while (duplicate)
		{	
			test.getFauna();
			duplicate = myList.isDuplicate(test);
		}
		myList.addFauna(test);
		//cout << test << endl;
		myList.displayList();
		cout << "\nWould you like to make another entry?";
		cin >> again;
		cin.ignore();
	} while (again == 'y');
	
    return 0;
}

