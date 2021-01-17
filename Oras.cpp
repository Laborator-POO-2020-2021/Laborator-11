#include "Oras.hpp"

Oras::Oras(): Localitate(), bonus_venit(0){};

Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit): Localitate(nume, nr_locuitori, venit_mediu), bonus_venit(bonus_venit){};

void Oras::afisare()
{
	cout << "------------------------------" << endl;
    cout << "Oras" << endl;
    cout << "------------------------------" << endl;
    cout << "Nume: " << nume << endl;
    cout << "Nr locuitori: " << nr_locuitori << endl;
    cout << "Venit mediu: " << venit_mediu << endl;
	cout << "Bonus venit: " << bonus_venit << endl;
	cout << "Venit total: " << venit_mediu + bonus_venit << endl;
    cout << "------------------------------" << endl;
};
