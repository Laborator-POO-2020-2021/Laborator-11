#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Problema_header_oras_Tufisi_Ionut_322AB.hpp"

class Municipiu: public Oras {
protected:
   char *regiune;
public:
    Municipiu();
	Municipiu(const char*,int,const char*,int,int);
	void afisare();
	~Municipiu();

};


#endif
