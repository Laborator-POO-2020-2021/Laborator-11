#include "municipiu.hpp"

	Municipiu::Municipiu():Oras(), regiune(NULL) {
	}
	
	Municipiu::Municipiu(const char *nume, const int loc, const int venit, const int bonus, const char *regiune): Oras(nume, loc, venit, bonus) {
		this->regiune = new char[strlen(regiune) + 1];
		strcpy(this->regiune, regiune);
	}
	
	Municipiu::~Municipiu() {
		delete []regiune;
	}
	
	void Municipiu::afisare() {
		Oras::afisare();
		cout << "Regiune: " << regiune << endl;
	}
	
