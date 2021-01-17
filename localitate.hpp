#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP
#include <iostream>
#include<cstring>
using namespace std;

class Localitate{
	protected:
		char *nume;
		int nr_locuitori;
		int venit_mediu;
	public:
		Localitate();
		Localitate(const char*,int,int);
		Localitate(const Localitate&);
		Localitate& operator=(const Localitate);
		virtual ~Localitate();
		virtual void afisare();
		virtual int getVenit();
		virtual int getLocuitori();
};
#endif

