#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include<iostream>
#include<cstring>

using namespace std;


class Localitate 
{
        char *nume;
        int nr_locuitori;
        int venit_mediu;
    public:
    	Localitate();
    	Localitate(const char *,const int,const int);
    	Localitate(const Localitate&);
    	Localitate& operator=(const Localitate&);
    	virtual int getVenit();
    	virtual int getNr();
    	virtual char* getNume()const;
    	virtual void afisare();
    	virtual void afisare1();
    	~Localitate();
};

#endif

