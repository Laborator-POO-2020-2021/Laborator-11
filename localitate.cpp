#include "localitate.hpp"

Localitate::Localitate()
{
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}
Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu)
{
    this->nume = new char[strlen(nume)+1];
	strcpy(this->nume,nume);
    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}
Localitate &Localitate::operator=(const Localitate& obj)
{
    if (nume != NULL)
		delete []nume;
	nume = new char[strlen(obj.nume) + 1];
	strcpy(nume,obj.nume);
    nr_locuitori = obj.nr_locuitori;
    venit_mediu = obj.venit_mediu;
    return *this;
}
char* Localitate::getNume()
{
	return nume;	
}

int Localitate::get_NrLoc()
{
    return nr_locuitori;
}

int Localitate::getVenit_mediu() 
{
    return venit_mediu;
}
void Localitate::afisare(ostream &out) 
{
    out<<"Nume:"<<nume<<" Nr.Loc: "<<nr_locuitori<<" Venit: "<<venit_mediu<<endl;
}

ostream &operator<<(ostream &out, Localitate &obj)
{
    obj.afisare(out);
    return out;
}
Localitate::~Localitate()
{
    delete []nume;
}