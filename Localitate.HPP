// Header pentru clasa Localitate - Clasa de baza

#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP
#include<iostream>
using namespace std;

class Localitate
{
	protected:
		char* nume;
		int nr_locuitori;
		int venit_mediu;
	public:
		Localitate();
		Localitate(char* name, int nr_loc, int venit);
		~Localitate();
		virtual int getVenit();
		int getLocuitori();
		char* getNume_localitate();
	    virtual void afisare();
};

#endif
