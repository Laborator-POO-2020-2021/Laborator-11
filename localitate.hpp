#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>
using namespace std;


class Localitate {
protected:
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
	Localitate();
	Localitate(const char*, const int, const int);
	~Localitate();
	
	int getPop();
	//aici metodele getVenit si afisare sunt virtuale pentru a putea fi folosite si din clasele mostenitoare;
	virtual int getVenit();
	virtual void afisare();
};

#endif
