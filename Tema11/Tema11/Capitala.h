#pragma once
#include "Oras.h"

class Capitala : virtual public Oras, virtual public Localitate
{
	char* tara;
public:
	Capitala();
	Capitala(char* tara, int bonus_venit, char* nume, int nr_locuitori, int venit_mediu);
	~Capitala();
	int getLocuitori();
	void print() override;
};

