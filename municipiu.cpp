#include "municipiu.hpp"


Municipiu::Municipiu():Oras()
{
    regiune = NULL;
}
Municipiu::Municipiu(const char* reg, int bonus, const char* num, int l, int v):Oras(bonus, num, l, v)
{
    regiune = new char[strlen(reg) + 1];
    strcpy(regiune, reg);
}
Municipiu::Municipiu(const Municipiu& obj):Oras(obj)
{
    this->regiune = NULL;
    *this = obj;
}
Municipiu& Municipiu::operator=(const Municipiu& obj)
{
    Oras::operator=(obj);
    if(regiune != NULL){
        delete[] regiune;
    }
    regiune = new char[strlen(obj.regiune) + 1];
    strcpy(regiune, obj.regiune);

    return *this;
}
Municipiu::~Municipiu()
{
    delete[] regiune;
}
void Municipiu::Afisare()
{
    Oras::Afisare();
    cout << "regiunea: " << regiune << endl; 
}
int Municipiu::Nr_loc()
{
    return Oras::Nr_loc();
}
int Municipiu::Venit_m()
{
    return Oras::Venit_m();
}