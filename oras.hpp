#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras : public Localitate {
 int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.

public:
	Oras();
	Oras(const char*,int,int  ,int );
	int getVenit();
	void afisare();
};
#endif
