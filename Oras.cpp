#include "Oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0){
}

Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume,nr_locuitori,venit_mediu),bonus_venit(bonus_venit){
}

int Oras::getVenitO(){
	return getVenit() + bonus_venit;
}

void Oras::afisare(){
	Localitate::afisare();
	cout << "Bonusul de venit al orasului este " << bonus_venit << endl;
}

