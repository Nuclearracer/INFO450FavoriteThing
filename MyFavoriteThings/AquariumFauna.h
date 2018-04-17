#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class AquariumFauna
{
private:
	string species;
	string condition;
	string location;
	double price;
	int qty;
	//date purchased
public:
	AquariumFauna();
	~AquariumFauna();
	void getFauna();
	void addFauna(int num);
	void reduceFauna(int num);
	string getSpecies();

	friend ostream & operator<<(ostream &os, const AquariumFauna &fauna);
};