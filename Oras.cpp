#include "Oras.hpp"

Oras::Oras(): Localitate(), bonus_venit(0)
{}

Oras::Oras( const char* nume1, int nr_locuitori, int venit_mediu, int bonus_venit ): Localitate( nume1, nr_locuitori, venit_mediu )
{
    this -> bonus_venit = bonus_venit;
}

Oras::Oras( const Oras& obj )
{
    *this = obj;
}

Oras& Oras::operator=( const Oras& obj )
{
    Localitate::operator=( obj );
    this -> bonus_venit = obj.bonus_venit;

    return *this;
}

void Oras::afisare()
{
    Localitate::afisare();
    cout << "Bonus venit: " << bonus_venit << endl ;
}

Oras::~Oras()
{}