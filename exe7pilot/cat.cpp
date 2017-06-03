/* MenyBuganim 302490610	BaruchRothkoff 311603252 */
#include <iostream>
#include <cassert>
#include "cat.h"
using namespace std;

Cat::Cat(){
	name = new char[100];
	assert(name != 0 && "heap error.");
	name = NULL;

	color = new char[100];
	assert(color != 0 && "heap error.");
	color = NULL;

	id = ++counter;
	mLength = 0;

}

Cat::Cat(char*name, int id, double mLength, char*color){
	this->name = _strdup(name);
	this->id = id;
	this->mLength = mLength;
	this->color = _strdup(color);
}

Cat::Cat(const Cat&copy){
	this->name = _strdup(copy.name);
	this->id = copy.id;
	this->mLength = copy.mLength;
	this->color = _strdup(copy.color);
}

const Cat Cat::operator=(const Cat&c){
	name = _strdup(c.name);
	color = _strdup(c.color);
	id = c.id;
	mLength = c.mLength;
	return *this;
}

Cat::~Cat(){
	delete[]name;
	delete[]color;
}

const StreetCat StreetCat:: operator=(const StreetCat&c){
	name = _strdup(c.name);
	color = _strdup(c.color);
	id = c.id;
	mLength = c.mLength;
	battles = c.battles;
	return *this;
}

const SiamiCat SiamiCat::operator=(const SiamiCat&c){
	name = _strdup(c.name);
	color = _strdup(c.color);
	id = c.id;
	mLength = c.mLength;
	FavFood = c.FavFood;
	return *this;
}

/*SiamiCat::~SiamiCat(){
	delete[]name;
	delete[]color;
}

StreetCat::~StreetCat(){
	delete[]name;
	delete[]color;
}*/