#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Baza{
public:
	virtual void afisare() = 0;
	virtual ~Baza() = 0 ;
	//virtual int venit_total() = 0;
	//virtual int getExp() = 0;
};

#endif
