#ifndef TARA_HPP
#define TARA_HPP

//#include "Localitate.hpp"
#include "Oras.hpp"
class Tara{
	Localitate **v;
	
	public:
		Tara();
		Tara(Localitate**);
		~Tara();
		
		//friend ostream& operator<<(ostream&,const Tara& obj);
		void afisare();
		int populatie();
		int venit_mediu();
};

#endif
