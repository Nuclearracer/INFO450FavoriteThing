#include "stdafx.h"
#include "AquariumFauna.h"

AquariumFauna::AquariumFauna()
{
	species = "";
	condition = "";
	location = "";
	price = 0;
	qty = 0;
}

AquariumFauna::~AquariumFauna()
{
	cout << "This is the destructor." << endl;
}

void AquariumFauna::getFauna()
{
	cout << "What kind of fish did you buy?" << endl;
	getline(cin, species);
	cout << "How many did you buy?" << endl;
	cin >> qty; // need to check for an int value.
	while (!cin.good())
	{
		cout << "Not a valid value. Please enter another number.";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> qty;
	}
	cin.ignore();
	cout << "Where did you buy your fish?" << endl;
	getline(cin, location);
	cout << "What was the price of the fish?" << endl;
	cin >> price; // need to check for a double value.
	while (!cin.good())
	{
		cout << "Not a valid value. Please enter another number.";
		cin.clear();
		cin.ignore(256, '\n');
		cin >> price;
	}
	cin.ignore();
	cout << "What was the condition of the fish?" << endl;
	getline(cin, condition);
}

void AquariumFauna::addFauna(int num)
{
	qty += num;
}

void AquariumFauna::reduceFauna(int num)
{
	qty -= num;
}

string AquariumFauna::getSpecies()
{
	return species;
}

ostream & operator<<(ostream &os, const AquariumFauna &fauna)
{
	os << "****Below is your Collection of Fish****" << endl;
	os << "Species: " << fauna.species << endl;
	os << "Place Purchased: " << fauna.location << endl;
	os << "Price: " << fauna.price << endl;
	os << "Number Owned: " << fauna.qty << endl;
	os << "Condition: " << fauna.condition << endl;
	return os;
}