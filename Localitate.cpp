#include "Localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0){
}

Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu):nr_locuitori(nr_locuitori),venit_mediu(venit_mediu){
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
}

int Localitate::getNrlocuitori(){
	return this->nr_locuitori;
}

int Localitate::getVenit(){
	return this->venit_mediu;
}

void Localitate::afisare()
{
	cout << "Localitatea " << nume << " are " << nr_locuitori << " de locuitori, iar venitul lor mediu este " << venit_mediu << endl;
}

Localitate::~Localitate(){
	delete []nume;
}
