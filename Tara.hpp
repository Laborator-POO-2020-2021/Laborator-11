#ifndef TARA_HPP
#define TARA_HPP
#include "Localitate.hpp"

class Tara
{
	 Localitate **v;
	public:
		Tara();
		~Tara();
		Tara &operator=(const Tara &);
		Tara(Localitate**);
		void afisare();
		int getLocuitori();
		int getVenit();

};


#endif
