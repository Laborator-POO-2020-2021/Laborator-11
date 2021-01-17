#include "Capitala.hpp"

Capitala::Capitala():Oras(), tara(NULL){}

Capitala::Capitala(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *tara):Oras(nume,  nr_locuitori, venit_mediu, bonus_venit)
{
    this->tara=new char(strlen(tara)+1);
    strcpy(this->tara, tara);
}

Capitala::~Capitala()
{
    delete []tara;
}

void Capitala::afisare()
{
    cout<<"Nume:"<<this->get_nume()<<endl;
    cout<<"Nr_locuitori:"<<get_nr_locuitori()<<endl;
    cout<<"Venit mediu:"<<get_venit_mediu()<<endl;
    cout<<"Bonus venit:"<<get_bonus()<<endl;
    cout<<"Tara:"<<tara<<endl;
}

char* Capitala::get_tara()
{
    return tara;
}
