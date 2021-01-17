#include "municipiu.hpp"

Municipiu::Municipiu() :regiune(NULL), Oras()
{
}

Municipiu::Municipiu(const char*reg, int bonus_ven, const char*num, int nr_loc, int venit_med) : Oras(bonus_ven, num, nr_loc, venit_med)
{
	this->regiune = new char[strlen(reg) + 1];
	strcpy(this->regiune, reg);
}

Municipiu::Municipiu(const Municipiu&obj)
{
	Oras::nume = NULL;
	regiune = NULL;
	*this = obj;
}

Municipiu& Municipiu::operator=(const Municipiu&obj)
{
	Oras::operator=(obj);
	if (regiune != NULL)
		delete[]regiune;
	regiune = new char[strlen(obj.regiune) + 1];
	strcpy(this->regiune, obj.regiune);
	return *this;
}

void Municipiu::afisare()
{
	Oras::afisare();
	cout << "Regiune: " << regiune << endl << endl;
}

Municipiu::~Municipiu()
{
	delete[]regiune;
}
