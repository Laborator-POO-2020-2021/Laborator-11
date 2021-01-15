// Header pentru clasa Capitala - clasa derivata a clasei Oras

#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include"Oras.hpp"
#include<iostream>
using namespace std;

class Capitala:public Oras
{
	protected:
		char* tara;
	
	public:
		Capitala();
		Capitala(char*,int,int,int,char*);
		~Capitala();
		char* getTara();
		void afisare();
};

#endif
