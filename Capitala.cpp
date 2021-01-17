#include "Capitala.hpp"

Capitala::Capitala():tara(NULL), Oras()
{
}

Capitala::Capitala(const char* tara, int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu): Oras(bonus_venit, nume, nr_locuitori, venit_mediu)
{
	if(tara == NULL) this->tara=NULL;
			else{
				this->tara = new char[strlen(tara)+1];
				strcpy(this->tara, tara);
				}     
}

Capitala& Capitala::operator=(const Capitala& obj)
{
	if (tara != NULL)
		delete []tara;
	this->tara = new char[strlen(obj.tara) + 1];
	strcpy(this->tara, obj.tara);
	Oras::operator=(obj);

	return *this;
}

void Capitala::afisare()
{   
	Oras::afisare();
	cout << "Tara: " << tara << endl;
}


Capitala::~Capitala()
{
	delete []tara;
}

