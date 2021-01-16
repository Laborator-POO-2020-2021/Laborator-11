#include "oras.hpp"

	Oras::Oras():Localitate(), bonus_venit(0) {
	}
	
	Oras::Oras(const char *nume, const int loc, const int venit, const int bonus):Localitate(nume, loc, venit), bonus_venit(bonus) {
	} 
	
	int Oras::getVenit() {
		return Localitate::getVenit() + bonus_venit;
	}
	
	void Oras::afisare() {
		Localitate::afisare();
		cout << "Bonus venit: " << bonus_venit << endl;
	}
