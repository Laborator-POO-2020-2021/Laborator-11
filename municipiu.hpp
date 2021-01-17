#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include"Oras.hpp"


class Municipiu : public Oras
{
	protected:
		char* regiune;

	public:
		Municipiu();
		Municipiu(const char*,int,int,int,const char*);
		~Municipiu();
		void afisare();
};

#endif
