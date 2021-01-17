#include "Capitala.hpp"

Capitala::Capitala(): Oras(), tara(NULL) {};

Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char* tara): Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala()
{
	delete []tara;
}

void Capitala::afisare()
{
	cout << "------------------------------" << endl;
    cout << "Capitala" << endl;
    cout << "------------------------------" << endl;
    cout << "Nume: " << nume << endl;
    cout << "Nr locuitori: " << nr_locuitori << endl;
    cout << "Venit mediu: " << venit_mediu << endl;
	cout << "Bonus venit: " << bonus_venit << endl;
	cout << "Tara: " << tara << endl;
	cout << "Venit total: " << venit_mediu + bonus_venit << endl;
    cout << "------------------------------" << endl;
}
