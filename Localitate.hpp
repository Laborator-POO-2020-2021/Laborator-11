#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <string.h>

using namespace std;

class Localitate
{
	protected:
		char* nume;
		int nr_locuitori;
		int venit_mediu;
	public:
		Localitate();
		~Localitate();
		Localitate(char*, int, int);
		Localitate& operator=(const Localitate&);
		char* getNume();
		int getLoc();
		int getVenit();

};


#endif
