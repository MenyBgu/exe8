/* MenyBuganim 302490610	BaruchRothkoff 311603252 */
#include <iostream>
#include <cassert>
#include "cat.h"
#include "pen.h"
using namespace std;

bool CatsPen::place(){
	return freeCavs == 5 ? false : true;
}
bool CatsPen::addStreet(){
	if (!freeCavs){
		cout << "full capacity." << endl;
		return false;
	}
	//TODO checkin to streetcat.
}
bool CatsPen::addSiami(){
	if (!freeCavs){
		cout << "full capacity." << endl;
		return false;
	}
	//TODO checkin to streetcat.
}