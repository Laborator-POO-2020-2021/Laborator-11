#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu: public Oras{
    char * regiune;
public:
	Municipiu();
	Municipiu(const char*, int, const char*, int, int );
	Municipiu(const Municipiu&);
	Municipiu& operator=(const Municipiu&);
	~Municipiu();
	
	char *getRegiune() const;
	void afisare();		
};

#endif
