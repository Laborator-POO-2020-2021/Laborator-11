#include "Oras.hpp"

//constr. Oras(), mosteneste constr. Localitate()
Oras::Oras():Localitate()
{
    bonus_venit = 0;
}

Oras::Oras(const char *n, int nr, int vm, int bv): Localitate(n, nr, vm)
{
    bonus_venit = bv;
}

int Oras::getVenit()
{
    int total = Localitate::getVenit() + bonus_venit;

    return total;
}

void Oras::afisare()
{
    Localitate::afisare();
     cout<<"Bonus:\t"<<bonus_venit<<endl;
}
