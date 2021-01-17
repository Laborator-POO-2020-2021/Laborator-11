#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

class Capitala: public Oras
{
	char *tara;
public:
	Capitala();
	Capitala(char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, char *tara);
	void afisare();
	bool isOras();
	int venit_total();
	int locuitori();
	~Capitala();

};

#endif
