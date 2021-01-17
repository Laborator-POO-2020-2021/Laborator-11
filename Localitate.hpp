#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include "Tara.hpp"

class Localitate: public Tara
{
	char *nume;
	int nr_locuitori;
	int venit_mediu;
public:
	Localitate();
	Localitate(char *nume, int nr_locuitori, int venit_mediu);
	void afisare();
	bool isOras();
	int venit_total();
	int locuitori();
	~Localitate();

};

#endif
