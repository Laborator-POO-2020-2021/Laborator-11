#pragma once
#include "Localitate.h"

class Oras: virtual public Localitate
{
protected:
	int bonus_venit;
public:
	Oras();
	Oras(int, char*, int, int);
	int getLocuitori();
	void print() override;
	int getVenit() override;
};

