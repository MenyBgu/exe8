/* MenyBuganim 302490610	BaruchRothkoff 311603252 */
#include <iostream>	
#include <cassert>
using namespace std;

#ifndef Cat_H
#define Cat_H

static int counter = NULL;

class Cat{
protected:
	char*name;
	int id;
	double mLength;
	char*color;
public:
	Cat();
	Cat(char*name, int id, double mLength, char*color);
	Cat(const Cat&copy);
	~Cat();
	const Cat operator=(const Cat&c);
	friend ostream& operator<< (ostream&os, const Cat&c){
		os << "cats name: " << c.name << endl
			<< "cats id: " << c.id << endl
			<< "cat mustach length: " << c.mLength << endl
			<< "cat color: " << c.color << endl << endl;
		return os;
	}
	friend istream&operator>>(istream&in, Cat&c){
		c.name = new char[100];
		assert(c.name != 0 && "heap error.");
		c.color = new char[100];
		assert(c.color != 0 && "heap error.");

		cout << "enter name: ";
		in >> c.name;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.ignore(INT_MAX, '\n');
			in >> c.name;
		}
		cout << endl << "enter mustach length: ";
		in >> c.mLength;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			in >> c.mLength;
		}
		cout << endl << "enter color: ";
		in >> c.color;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.ignore(INT_MAX, '\n');
			in >> c.color;
		}
		cout << endl;
		c.id = ++counter;
		return in;
	}
};

class StreetCat :public Cat{
	int battles;
public:
	StreetCat(){}
	StreetCat(const Cat&c, int battles) : Cat(c), battles(battles){}
	StreetCat(const StreetCat&copy) :Cat(copy), battles(copy.battles){}
	~StreetCat(){}
	const StreetCat operator=(const StreetCat&c);
	friend ostream& operator<< (ostream&os, const StreetCat&c){
		os << "cats name: " << c.name << endl
			<< "cats id: " << c.id << endl
			<< "cat mustach length: " << c.mLength << endl
			<< "cat color: " << c.color << endl
			<< "cat fights: " << c.battles << endl << endl;
		return os;
	}
	friend istream&operator>>(istream&in, StreetCat&c){
		c.name = new char[100];
		assert(c.name != 0 && "heap error.");
		c.color = new char[100];
		assert(c.color != 0 && "heap error.");

		cout << "enter name: ";
		in >> c.name;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.ignore(INT_MAX, '\n');
			in >> c.name;
		}
		cout << endl << "enter mustach length: ";
		in >> c.mLength;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			in >> c.mLength;
		}
		cout << endl << "enter color: ";
		in >> c.color;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.ignore(INT_MAX, '\n');
			in >> c.color;
		}
		cout << endl << "enter cat number of fights: ";
		in >> c.battles;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			in >> c.battles;
		}
		cout << endl;
		c.id = ++counter;
		return in;
	}
};

class SiamiCat :public Cat{
	char FavFood;
public:
	SiamiCat(){}
	SiamiCat(const Cat&c, char food) :Cat(c), FavFood(food){}
	SiamiCat(const SiamiCat&copy) :Cat(copy), FavFood(copy.FavFood){}
	~SiamiCat(){}
	const SiamiCat operator=(const SiamiCat&c);
	friend ostream& operator<< (ostream&os, const SiamiCat&c){
		os << "cats name: " << c.name << endl
			<< "cats id: " << c.id << endl
			<< "cat mustach length: " << c.mLength << endl
			<< "cat color: " << c.color << endl
			<< "favorite food: " << c.FavFood << endl << endl; //options are A or B.
		return os;
	}
	friend istream&operator>>(istream&in, SiamiCat&c){
		c.name = new char[100];
		assert(c.name != 0 && "heap error.");
		c.color = new char[100];
		assert(c.color != 0 && "heap error.");
		cout << "enter name: ";
		in >> c.name;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.ignore(INT_MAX, '\n');
			in >> c.name;
		}
		cout << endl << "enter mustach length: ";
		in >> c.mLength;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			in >> c.mLength;
		}
		cout << endl << "enter color: ";
		in >> c.color;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.ignore(INT_MAX, '\n');
			in >> c.color;
		}
		cout << endl << "please enter favorite food: ";
		in >> c.FavFood;
		while (cin.fail()){
			cout << "error occure,try again: ";
			cin.ignore(INT_MAX, '\n');
			in >> c.FavFood;
		}

		cout << endl;
		c.id = ++counter;
		return in;
	}
};


#endif // !Cat_H


