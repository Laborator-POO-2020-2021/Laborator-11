#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara
{
	Localitate** v;
	public:
		Tara();
		Tara(Localitate**);
		~Tara();
		void afisare();
		int getNr_Locuitori_Total();
		int getVenit_Total();
};

#endif
