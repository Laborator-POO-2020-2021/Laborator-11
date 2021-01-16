#include "localitate.h"

Localitate::Localitate():nume(NULL), nr_locuitori(0), venit_mediu(0)
{

}
Localitate::Localitate(const char*num, int nr, int med): nr_locuitori(nr), venit_mediu(med)
{
	nume = new char[strlen(num) + 1];
	strcpy(nume, num);
}
Localitate::Localitate(const Localitate&obj)
{

	nume = NULL;
	*this = obj;

}
Localitate& Localitate::operator =(const Localitate& obj)
{
	if (nume != NULL)
		delete[]nume;

	nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume, obj.nume);
	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;

	return *this;
}
int Localitate::locuitori()
{
	return nr_locuitori;
}
int Localitate::venit()
{
	return venit_mediu ;
}
void Localitate::afisare()
{
	if (nume != NULL)
		cout <<"nume: "<< nume<<" ";
	cout << "nr de locuitori: " << nr_locuitori << " ";
	cout << "venit mediu: " << venit_mediu<<" ";

}
Localitate::~Localitate()
{
	delete[]nume;
}