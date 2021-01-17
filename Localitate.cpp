#include "Localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0){};

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu): nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
};

Localitate::~Localitate()
{
	delete []nume;
};

void Localitate::afisare()
{
	cout << "------------------------------" << endl;
    cout << "Localitate" << endl;
    cout << "------------------------------" << endl;
    if(nume != NULL)
    	cout << "Nume: " << nume << endl;
    else cout << "Nume: " << "[NEDEFINIT!]" << endl;
    cout << "Nr locuitori: " << nr_locuitori << endl;
    cout << "Venit mediu: " << venit_mediu << endl;
    cout << "------------------------------" << endl;
};
