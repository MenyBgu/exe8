/* MenyBuganim 302490610	BaruchRothkoff 311603252 */
#include <iostream>
#include <cassert>
#include "cat.h"
using namespace std;

#ifndef Pen_H
#define Pen_H

class CatsPen{
	StreetCat*p1;
	SiamiCat*p2;
	int catsIn;
	int freeCavs;		//total can be 5.
public:
	CatsPen(){}
	~CatsPen();
	/*friend ostream&operator<<(ostream os, const CatsPen&c){		//TODO how?
		os << c.p1;
		os << c.p2;
		return os;
	}*/
	bool place();
	bool addStreet();
	bool addSiami();
};

#endif // !Pen_H
