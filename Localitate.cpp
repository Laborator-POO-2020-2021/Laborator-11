#include "Localitate.hpp"

Localitate::Localitate(): nr_locuitori(0), venit_mediu(0)
{
    nume = NULL;
}
Localitate::Localitate( const char* nume, int nr_locuitori, int venit_mediu): nr_locuitori(nr_locuitori), venit_mediu(venit_mediu)
{
    
    this -> nume = new char[ strlen( nume ) + 1 ];
    strcpy( this -> nume, nume );

}

Localitate::Localitate( const Localitate& obj )
{
    nume  = NULL;
    *this = obj;
}

void Localitate::afisare()
{
    cout << endl << "Localitatea: "<< nume << endl <<"Numarul de locitor: " << nr_locuitori << endl << "Venitul mediu: " << venit_mediu << endl;
}

Localitate& Localitate::operator=( const Localitate& obj )
{
    if( nume != NULL )
    delete[] nume;
    this -> nume = new char[ strlen( obj.nume ) + 1 ];
    strcpy( this -> nume, obj.nume );

    this -> nr_locuitori = obj.nr_locuitori;
    this -> venit_mediu = obj.venit_mediu;

    return *this;
}

int Localitate::getLocuitori()
{
    return nr_locuitori;
}

int Localitate::getVenitmediu()
{
    return venit_mediu;
}

Localitate::~Localitate()
{
   delete[] nume; 
}
