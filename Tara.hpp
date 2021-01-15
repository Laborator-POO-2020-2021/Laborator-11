// Header pentru clasa Tara - clasa container

#ifndef TARA_HPP
#define TARA_HPP
#include<iostream>
#include"Localitate.hpp"
using namespace std;

class Tara
{
	protected:
		Localitate **v;
	public:
		Tara();
		Tara(Localitate **v);
		~Tara();
		void add_object(Localitate* loc);
		int get_locuitori();
		int get_venit();
		void afisare();
};
#endif
