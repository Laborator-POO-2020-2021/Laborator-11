#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu: public Oras
{
	char *regiune;
public:
	Municipiu();
	Municipiu(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, char *regiune);
	void afisare();
	bool isOras();
	int venit_total();
	~Municipiu();
	int locuitori();

};

#endif
