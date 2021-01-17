#include "Problema_header_localitate_Tufisi_Ionut_322AB.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0){}

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu): nr_locuitori(nr_locuitori),venit_mediu(venit_mediu){

    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);

}

void Localitate::afisare(){

	cout << "Numele localitatii: " << nume << endl << "Nr-ul locuitorilor localitatii: " << nr_locuitori << endl << "Venitul mediu: " << venit_mediu << endl;
}

int Localitate::getNrLoc()
{
    return nr_locuitori;
}

int Localitate::getVenitMed()
{
    return venit_mediu;
}

Localitate::~Localitate()
{
    delete nume;
}

Localitate::~Localitate()
{
    delete nume;
}
