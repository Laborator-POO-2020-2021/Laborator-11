#include "localitate.hpp"

	Localitate::Localitate():nume(NULL), nr_locuitori(0), venit_mediu(0) {
	}
	
	Localitate::Localitate(const char *nume, const int loc, const int venit):nr_locuitori(loc), venit_mediu(venit) {
		this->nume = new char[strlen(nume) + 1];
		strcpy(this->nume, nume);
	}
	Localitate::~Localitate() {
		delete []nume;
	}
	
	int Localitate::getPop() {
		return nr_locuitori;
	}
	
	int Localitate::getVenit() {
		return venit_mediu;
	}
	
	void Localitate::afisare() {
		cout << "Nume: " << nume << endl;
		cout << "Numar locuitori: " << nr_locuitori << endl;
		cout << "Venit mediu: " << venit_mediu << endl;
	}
