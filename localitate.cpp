#include "localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu) {

	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume, nume);
	this->nr_locuitori = nr_locuitori;
	this->venit_mediu = venit_mediu;

}

Localitate::~Localitate() {
	delete[]nume;
}

int Localitate::getNrLocuitori() {
	return nr_locuitori;
}

int Localitate::getVenitMediu() {
	return venit_mediu;
}

void Localitate::afisare() {
	cout << endl << "Nume: " << nume << "  " << "Nr. locuitori: " << nr_locuitori << "   " << "Venit Mediu: " << venit_mediu << endl;
}

//void Localitate::interschimbare(Localitate& obj) {
//	Localitate aux(*this);
//	*this = obj;
//	obj = aux;
//}
