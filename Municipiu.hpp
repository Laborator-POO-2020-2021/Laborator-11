// Header pentru clasa Municipiu - clasa derivata a clasei oras

#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP
#include<iostream>
#include"Oras.hpp"
using namespace std;

class Municipiu : public Oras
{
	protected:
		char* regiune;
	
	public:
		Municipiu();
		Municipiu(char*,int,int,int,char*);
		~Municipiu();
		char* getRegiune();
		void afisare();
};

#endif
