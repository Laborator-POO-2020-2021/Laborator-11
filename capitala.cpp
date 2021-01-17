#include "capitala.hpp"
Capitala::Capitala() : Oras(), tara(NULL) {}

Capitala::Capitala(const char *tara,int bonus_venit, const char *nume, int nr_locuitori, int venit_mediu) :  Oras(bonus_venit, nume,nr_locuitori,venit_mediu)
{
    this->tara = new char[strlen(tara) + 1];
    strcpy(this->tara, tara);
}

void Capitala::afisare()
{
    cout<< "Tara: "<<getTara();
    cout << "; Bonus venit: " << getBonus_venit();
    cout << "; nume: " << getNume();
     cout << "; nr_locuitori: ";
    cout << getNr_locuitori();
    cout << "; Venit mediu: ";
    cout << getVenit_mediu();
    cout << "}\n";
}


char* Capitala::getTara()
{
    return tara;
}