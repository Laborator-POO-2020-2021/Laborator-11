#include "Municipiu.hpp"

Municipiu::Municipiu(): Oras(), regiune(NULL) {};

Municipiu::Municipiu(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char* regiune): Oras(nume, nr_locuitori, venit_mediu, bonus_venit)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu()
{
    delete []regiune;
}

void Municipiu::afisare()
{
    cout << "------------------------------" << endl;
    cout << "Municipiu" << endl;
    cout << "------------------------------" << endl;
    cout << "Nume: " << nume << endl;
    cout << "Nr locuitori: " << nr_locuitori << endl;
    cout << "Venit mediu: " << venit_mediu << endl;
	cout << "Bonus venit: " << bonus_venit << endl;
	cout << "Regiune: " << regiune << endl;
	cout << "Venit total: " << venit_mediu + bonus_venit << endl;
    cout << "------------------------------" << endl;
}