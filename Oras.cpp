#include "Oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0){};

Oras::Oras(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume, nr_locuitori, venit_mediu), bonus_venit(bonus_venit)
{

}

void Oras::afisare()
{
    cout<<"Nume:"<<this->get_nume()<<endl;
    cout<<"Nr_locuitori:"<<get_nr_locuitori()<<endl;
    cout<<"Venit mediu:"<<get_venit_mediu()<<endl;
    cout<<"Bonus venit:"<<bonus_venit<<endl;
}

int Oras::get_venit()
{
    return ((this->get_venit_mediu())*(this->get_nr_locuitori()))+this->bonus_venit;
}

int Oras::get_bonus()
{
    return this->bonus_venit;
}

Oras::~Oras(){}


