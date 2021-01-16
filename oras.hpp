#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras:public Localitate{
protected:
    int bonus_venit;  
public:
	Oras();
	Oras(const char*, int, int, int);
	virtual void afisare();
	virtual int getLocuitori();
	virtual int getVenit();
	~Oras();
};

#endif
