#ifndef ORAS_HPP
#define ORAS_HPP

#include "Problema_header_localitate_Tufisi_Ionut_322AB.hpp"

class Oras: public Localitate {
protected:
   int bonus_venit;
public:
    Oras();
	Oras(int, const char*, int, int);
	void afisare();
	//int venit_total();
	//int getExp();

};


#endif
