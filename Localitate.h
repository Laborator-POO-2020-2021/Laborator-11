#ifndef LOCALITATE_H
#define LOCALITATE_H

#include <iostream>
#include <cstring>
using namespace std;

class Localitate
{
protected:
	char* nume;
	int nr_locuitori;
	int venit_mediu;
public:
	Localitate();
	Localitate(const char*, int, int);
	Localitate(const Localitate&);
	Localitate& operator= (const Localitate&);
	~Localitate();
	virtual int get_nr_locuitori() const;
	virtual int get_venit_mediu() const;
	friend ostream &operator<<(ostream&, Localitate&);
	virtual void afisare(ostream&);
};

#endif