#include "Problema_header_oras_Tufisi_Ionut_322AB.hpp"

Oras::Oras():Localitate(),bonus_venit(0){}

Oras::Oras(int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu):Localitate(nume,nr_locuitori,venit_mediu),bonus_venit(bonus_venit){

    /*this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);*/

}

void Oras::afisare(){

	cout << "Venitul bonus: " << bonus_venit << endl;
	Localitate::afisare();
}

/*int Fermier::venit_total(){
	return (suprafata/100)*venit_pe_ora;
}
int Fermier::getExp(){

	return 0;
}*/
