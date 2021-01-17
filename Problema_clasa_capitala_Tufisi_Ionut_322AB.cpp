#include "Problema_header_capitala_Tufisi_Ionut_322AB.hpp"

Capitala::Capitala():Oras(),tara(NULL){}

Capitala::Capitala(const char *tara, int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu):Oras(bonus_venit,nume,nr_locuitori,venit_mediu){

    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara,tara);

}

void Capitala::afisare(){

	cout << "Tara: " << tara << endl;
	Oras::afisare();
}
