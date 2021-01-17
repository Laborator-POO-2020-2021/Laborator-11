#ifndef TARA_HPP
#define TARA_HPP

#include "Municipiu.hpp"
#include "Capitala.hpp"
using namespace std;
class Tara{
		Localitate **v;
		
	public:
		Tara();
		Tara(Localitate**);
		Tara(const Tara&);
		~Tara();
	 Tara& operator=(const Tara&);
     void put(Localitate *obj);
     void afisare();
     int getLoc();
     int getVenit();

};

#endif
