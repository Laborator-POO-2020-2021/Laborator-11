#include "Localitate.hpp"


Localitate::Localitate():Oras(),nume(NULL),nr_locuitori(0),venit_mediu(0)
{}


Localitate::Localitate(char *tara, char *regiune, int bonus_venit , char *nume ,int nr_locuitori, int venit_mediu) :Oras(tara, regiune, bonus_venit), nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);
}

void Localitate::afisare()
{
    Oras::afisare();
    cout<< "nume localitate " << nume <<endl;
    cout<< "nr_locuitor localitate " << nr_locuitori <<endl;
    cout<< "venit_mediu localitate "<< venit_mediu <<endl;

}
int Localitate::getNrloc()
{
	return nr_locuitori;
}
int Localitate::getVenit()
{
	return venit_mediu;
}

