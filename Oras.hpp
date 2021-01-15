// Header pentru clasa Oras - clasa derivata a clasei Localitate


#ifndef ORAS_HPP
#define ORAS_HPP
#include<iostream>
#include"Localitate.hpp"
using namespace std;

class Oras : public Localitate
{
	protected:
		int bonus_venit;
	
	public:
		Oras();
		Oras(int,int,int,char*);
		int getBonus();
		int getVenit();
		void afisare();
};

#endif
