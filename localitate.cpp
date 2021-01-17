#include "localitate.hpp"

Localitate::Localitate()
{
    nume = NULL;
    nr_locuitori = 0;
    venit_mediu = 0;
}
Localitate::Localitate(const char* n, int loc, int vm):nr_locuitori(loc), venit_mediu(vm)
{
    nume = new char[strlen(n) + 1];
    strcpy(nume, n);
}
Localitate::Localitate(const Localitate& obj)
{
    this->nume = NULL;
    *this = obj;
}
Localitate& Localitate::operator=(const Localitate& obj)
{
    if(nume != NULL){
        delete[] nume;
    }
    nume = new char[strlen(obj.nume) + 1];
    strcpy(nume, obj.nume);
    nr_locuitori = obj.nr_locuitori;
    venit_mediu = obj.venit_mediu;

    return *this;
}
Localitate::~Localitate()
{
    delete[] nume;
}
void Localitate::Afisare()
{
    cout << "nume: " << nume << endl;
    cout << "numar locuitori: " << nr_locuitori << endl;
    cout << "venitul mediu: " << venit_mediu << endl; 
}
int Localitate::Nr_loc()
{
    return nr_locuitori;
}
int Localitate::Venit_m()
{
    return venit_mediu;
}

