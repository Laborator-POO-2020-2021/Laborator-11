#include "Municipiu.hpp"

Municipiu::Municipiu():Oras(), regiune(NULL){}

Municipiu::Municipiu(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *regiune):Oras(nume,  nr_locuitori, venit_mediu, bonus_venit)
{
    this->regiune=new char(strlen(regiune)+1);
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu()
{
    delete []regiune;
}

void Municipiu::afisare()
{
    cout<<"Nume:"<<this->get_nume()<<endl;
    cout<<"Nr_locuitori:"<<get_nr_locuitori()<<endl;
    cout<<"Venit mediu:"<<get_venit_mediu()<<endl;
    cout<<"Bonus venit:"<<get_bonus()<<endl;
    cout<<"Regiune:"<<regiune<<endl;
}
