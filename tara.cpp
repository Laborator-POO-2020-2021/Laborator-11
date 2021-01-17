#include "tara.hpp"

Tara::Tara(): v(NULL) {}

Tara::Tara(Localitate** v) {
	this->v = v;
}

Tara::~Tara() {
	delete[]v;
}

int Tara::LocuitoriTara() {
	int s = 0, i = 0;

	while (v[i] != NULL) {
		s = s + v[i]->getNrLocuitori();
		i++;
	}
	
	return s;
}

int Tara::venitTara() {
	int s = 0, i = 0;

	while (v[i] != NULL) {
		s = s + v[i]->getVenitMediu();
		i++;
	}

	return s;
}

void Tara::afisareT() {
	int i = 0;
	while (v[i] != NULL) {
		v[i]->afisare();
		i++;
	}
}















