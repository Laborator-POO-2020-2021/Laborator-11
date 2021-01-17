#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras: public Localitate
{
	int bonus_venit;
public:
	Oras();
	Oras(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit);
	void afisare();
	bool isOras();
	int venit_total();
	int locuitori();
};

#endif
