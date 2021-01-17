#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Problema_header_oras_Tufisi_Ionut_322AB.hpp"

class Capitala: public Oras {
protected:
   char *tara;
public:
    Capitala();
	Capitala(const char*, int, const char*, int, int);
	void afisare();
	~Capitala();

};


#endif
