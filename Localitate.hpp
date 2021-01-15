#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include<iostream>
#include<string.h>
using namespace std;

class Localitate{
	protected:
		char *nume;
		int nr_locuitori;
		int venit_mediu;
	
	public:
		Localitate();
		Localitate(const char*,const int,const int);
		~Localitate();
		
		int getNr_locuitori();
		virtual int getVenit();
		virtual void afisare();
		Localitate& operator=(const Localitate&);
		friend ostream& operator<<(ostream&,const Localitate&);
};

#endif

