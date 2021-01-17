#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>

using namespace std;

class Localitate{
	char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
	Localitate();
	Localitate(const char*,int,int);
	Localitate(const Localitate&);
	Localitate& operator=(const Localitate&);
	~Localitate();
	
//	friend ostream& operator<<(ostream&, const Localitate&);
	void afisare();
	char* getNume();
	int getNRlocuitori();
	int getVenitMediu();
};

#endif
