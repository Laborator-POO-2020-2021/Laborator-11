#pragma once
#include "Oras.h"

class Municipiu : virtual public Oras, virtual public Localitate
{
	char *regiune;
public:
	Municipiu();
	Municipiu(char* regiune, int bonus_venit, char* nume, int nr_locuitori, int venit_mediu);
	~Municipiu();
	int getLocuitori();
	void print() override;
};

