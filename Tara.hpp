#ifndef TARA_HPP
#define TARA_HPP

//#include<iostream>
//#include<cstring>
//using namespace std;

#include "Oras.hpp"
class Tara 
{
        Localitate **v; 
        
        public:
        	Tara();
        	Tara(Localitate **);
        	~Tara();
        	
        	void afisare();
        	int Locuitori();
        	int Venit();
};
#endif
