#include "localitate.hpp"

Localitate::Localitate():nume(NULL), nr_locuitori(0), venit_mediu(0)
{
}

Localitate::Localitate(const char*num, int nr_loc, int venit_med): nr_locuitori(nr_loc), venit_mediu(venit_med)
{
	nume = new char[strlen(num) + 1];
	strcpy(nume, num);
}

Localitate::Localitate(const Localitate&obj)
{
	nume = NULL;
	*this = obj;
}

Localitate& Localitate::operator=(const Localitate&obj)
{
	if (nume != NULL)
		delete[]nume;
	nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);
	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	return *this;
}

void Localitate::afisare()
{	
	if(nume != NULL)
		cout << "Numele localitatii: "<< nume << endl;
	cout << "Nr de locuitori: " << nr_locuitori << endl;
	cout << "Venitul mediu: " << venit_mediu << endl;
	cout << endl;
}

int Localitate::getNR()
{
	return nr_locuitori;
}

int Localitate::getVenit()
{
	return venit_mediu;
}

Localitate::~Localitate()
{
	delete[]nume;
}
