#ifndef TARA_HPP
#define TARA_HPP
#include "municipiu.hpp"
#include "capitala.hpp"

class Tara{
	Localitate **v;
	public:
		Tara();
		Tara(Localitate**);
		void afisare();
		Tara(const Tara&);
		Tara& operator=(const Tara&);
		int getVenit();
		int getLocuitori();
		~Tara();
};
#endif
