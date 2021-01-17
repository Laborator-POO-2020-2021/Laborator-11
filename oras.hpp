#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras:public Localitate
{
        int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
    public:
    	Oras();
    	Oras(const int,const char *,const int,const int);
        Oras(const Oras&);
    	Oras& operator=(const Oras&);
    	virtual int getVenit();
    	virtual int getNr();
    	virtual char* getNume()const;
    	void afisare();
    	void afisare1();
};

#endif

