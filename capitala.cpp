#include "capitala.hpp"

Capitala::Capitala(): Oras(), tara(NULL) {}

Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu, int venit_bonus, const char* tara): Oras(nume, nr_locuitori, venit_mediu, venit_bonus) {
	this->tara = new char[strlen(tara) + 1];
	strcpy(this->tara, tara);
}


Capitala::~Capitala() {
	delete[]tara;
}

char* Capitala::getTara() {
	return tara;
}

void Capitala::afisare() {
	Oras::afisare();
	cout << "Tara: " << tara << endl;
}