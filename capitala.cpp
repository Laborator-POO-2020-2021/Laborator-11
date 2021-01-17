#include "capitala.hpp"


Capitala::Capitala():Oras()
{
    tara = NULL;
}
Capitala::Capitala(const char* t, int bonus, const char* num, int l, int v):Oras(bonus, num, l, v)
{
    tara = new char[strlen(t) + 1];
    strcpy(tara, t);
}
Capitala::Capitala(const Capitala& obj):Oras(obj)
{
    this->tara = NULL;
    *this = obj;
}
Capitala& Capitala::operator=(const Capitala& obj)
{
    Oras::operator=(obj);
    if(tara != NULL){
        delete[] tara;
    }
    tara = new char[strlen(obj.tara) + 1];
    strcpy(tara, obj.tara);

    return *this;
}
Capitala::~Capitala()
{
    delete[] tara;
}
void Capitala::Afisare()
{
    Oras::Afisare();
    cout << "tara: " << tara << endl; 
}
int Capitala::Nr_loc()
{
    return Oras::Nr_loc();
}
int Capitala::Venit_m()
{
    return Oras::Venit_m();
}