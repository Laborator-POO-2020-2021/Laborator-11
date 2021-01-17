#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras:public Localitate
{
	protected:
		int bonus_venit;
		public:
			Oras();
			Oras(const char*,int,int,int);
			Oras(const Oras&);
			Oras& operator =(const Oras&);
			int getBonus();
			void afisare();
};

#endif
