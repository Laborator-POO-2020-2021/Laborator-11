#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras: public Localitate{
        int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
	Oras();
	Oras(int, const char*, int, int);
	Oras& operator=(const Oras&);
	int venit(); //returneaza venitul orasului cu bonus
	void afisare();
	~Oras(); 
};

#endif

