//Antohi Sorin 324AB

#ifndef LOCALITATE_H
#define LOCALITATE_H

#include <iostream>
using namespace std;
#include <assert.h>
#include <stdlib.h>
#include <string.h>

class Localitate
{
	char *nume;
	int nr_locuitori;
	int venit_mediu;
	public:
		Localitate();
		Localitate(char*,int,int);
		~Localitate();
		friend ostream& operator<<(ostream&, const Localitate&);
		Localitate& operator=(const Localitate);
		int numar_locuitori()
		{
			return nr_locuitori;
		}
		int castig()
		{
			return venit_mediu;
		}
		virtual void afisare();
};

#endif
