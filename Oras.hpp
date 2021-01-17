#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"
class Oras: public Localitate{
	protected:
		int bonus_venit;

	public:
		Oras();
		Oras(int,const char*,int,int);
		Oras(const Oras&);
		~Oras();
		Oras& operator=(const Oras&);
	virtual	void afisare();
	virtual int getLoc();
	virtual int getVenit();
        
};

#endif
