#include "municipiu.hpp"
Municipiu::Municipiu() :Oras(), regiune(NULL) {}

Municipiu::Municipiu(const char *regiune,int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) : Oras(bonus_venit,nume,nr_locuitori,venit_mediu)
{
    this->regiune = new char[strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

void Municipiu::afisare()
{
    cout<< "Regiune: "<<getRegiune();
    cout << "; Bonus venit: " << getBonus_venit();
    cout << "; nume: " << getNume();
     cout << "; nr_locuitori: ";
    cout << getNr_locuitori();
    cout << "; Venit mediu: ";
    cout << getVenit_mediu();
    cout << "}\n";
}


char* Municipiu::getRegiune()
{
    return regiune;
}