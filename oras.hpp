#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras: public Localitate{
protected:
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
	Oras();
	Oras(int, const char*, int, int);
	Oras(const Oras&);
	Oras& operator=(const Oras&);
	~Oras();
	
	int getVenit() ;
	int getBonusVenit() const;	
	void afisare();
};

#endif
