#ifndef TARA_HPP
#define TARA_HPP


#include "municipiu.hpp"
#include "capitala.hpp"

class Tara
{
        Localitate **v; //#hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
	Tara();
	Tara(Localitate**);
	void afisare();
	Tara(const Tara&);
	Tara& operator=(const Tara&);
	int getVenit();
	int getLocuitori();   
	~Tara();     
};
#endif
