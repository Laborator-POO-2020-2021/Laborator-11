#ifndef TARA_HPP
#define TARA_HPP

#include "municipiu.hpp"
#include "capitala.hpp"
#include <typeinfo>

class Tara
{
        Localitate **v; 
    public:
    	Tara();
    	Tara(Localitate**);
    	Tara(const Tara&);
    	Tara& operator=(const Tara&);
    	void afisare();
    	int getVenit();
    	int getNr();
    	char* getNume()const;
    	~Tara();
    	
};

#endif
