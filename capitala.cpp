#include "capitala.hpp"

	Capitala::Capitala():Oras(), tara(NULL) {
	}
	
	Capitala::Capitala(const char *nume, const int loc, const int venit, const int bonus, const char *tara):Oras(nume, loc, venit, bonus) {
		this->tara = new char[strlen(tara) + 1];
		strcpy(this->tara, tara);
	}
	
	Capitala::~Capitala() {
		delete []tara;
	}
	
	void Capitala::afisare() {
		Oras::afisare();
		cout << "Tara: " << tara << endl;
	}

