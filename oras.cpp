#include "oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0)
{

}

Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu,int bonus_venit):Localitate(nume,nr_locuitori,venit_mediu),bonus_venit(bonus_venit)
{

}

int Oras::getbonus() const
{
    return this->bonus_venit;
}

void Oras::setbonus(int a)
{
    this->bonus_venit=a;
}

int Oras::getvenit()
{
    return ((this->getvenitm())*(this->getloc()))+this->bonus_venit;
}

void Oras::afisare()
{
    cout<<"Localiatatea cu numele de: "<<this->getnume()<<" are "<<this->getloc()<<" de locuitori, cu venitul mediu de  "<<this->getvenitm()<<"  ";
    cout<<"Bonus: "<<this->bonus_venit<<endl;
}
