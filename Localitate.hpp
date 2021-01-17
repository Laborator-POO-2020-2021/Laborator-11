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
	Localitate(const char* ,int ,int );
	//Localitate(const Localitate&);	Nu cred ca mai am nevoie
	
	virtual void afisare();	//Fac o functie de afisare virtuala ca sa nu mai apelez fiecare afisare in functii
	
	int getNrLocuitori();		//Cerinta 3
	virtual int getVenitMediu();//Tot virtuala ca sa poata fi "transmisa" 		//Cerinta 4
	
	~Localitate();
	
};

#endif
