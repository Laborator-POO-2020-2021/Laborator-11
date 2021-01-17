#include "Municipiu.hpp"

Municipiu::Municipiu():regiune(NULL), Oras()
{
}

Municipiu::Municipiu(const char* regiune, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu): Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
	if(regiune == NULL) this->regiune=NULL;
			else{
				this->regiune = new char[strlen(regiune)+1];
				strcpy(this->regiune, regiune);
				}     
}

Municipiu& Municipiu::operator=(const Municipiu& obj)
{
	if (regiune != NULL)
		delete []regiune;
	this->regiune = new char[strlen(obj.regiune) + 1];
	strcpy(this->regiune, obj.regiune);
	Oras::operator=(obj);

	return *this;
}

void Municipiu::afisare()
{   
	Oras::afisare();
	cout << "Regiune: " << regiune << endl;
}

Municipiu::~Municipiu()
{
	delete []regiune;
}

