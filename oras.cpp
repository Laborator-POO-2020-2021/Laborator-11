#include "oras.hpp"

Oras::Oras():Localitate(), bonus_venit(0){}


Oras::Oras(int bonus, const char* num, int l, int v):Localitate(num, l, v), bonus_venit(bonus){}


Oras::Oras(const Oras& obj):Localitate(obj)
{
    *this = obj;
}
Oras& Oras::operator=(const Oras& obj)
{
    Localitate::operator=(obj);
    bonus_venit = obj.bonus_venit;

    return *this;
}
void Oras::Afisare()
{
    Localitate::Afisare();
    cout << "bunus venit: " << bonus_venit << endl;
}
int Oras::Nr_loc()
{
    return Localitate::Nr_loc();
}
int Oras::Venit_m()
{
    return Localitate::Venit_m() + bonus_venit;
}