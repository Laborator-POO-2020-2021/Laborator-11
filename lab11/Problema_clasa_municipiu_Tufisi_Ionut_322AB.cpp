#include "Problema_header_municipiu_Tufisi_Ionut_322AB.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL){}

Municipiu::Municipiu(const char *regiune, int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu):Oras(bonus_venit,nume,nr_locuitori,venit_mediu){

    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune,regiune);

}

void Municipiu::afisare(){

	cout << "Regiunea: " << regiune << endl;
	Oras::afisare();
}

Municipiu::~Municipiu()
{
    delete regiune;
}
