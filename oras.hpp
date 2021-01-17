#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras : public Localitate
{
	protected:
		int bonus_venit;

	public:
		Oras();
		Oras(int,int,int,const char*);
		int getBonus();
		int getVenit();
		void afisare();
};

#endif
