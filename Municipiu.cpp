#include "Municipiu.hpp"

Municipiu::Municipiu(): Oras()
{
    regiune = NULL;
}

Municipiu::Municipiu( const char* nume2, int nr_locuitori, int venit_mediu, int bonus_venit, const char* regiune ): Oras( nume2, nr_locuitori, venit_mediu, bonus_venit )
{
    this -> regiune = new char[ strlen( regiune ) + 1 ];
    strcpy( this -> regiune, regiune );
}

Municipiu::Municipiu( const Municipiu& obj )
{
    regiune = NULL;
    *this = obj;
}


Municipiu& Municipiu::operator=( const Municipiu& obj )
{
    Oras::operator=( obj );
    if( regiune != NULL )
    delete[] regiune;
    this -> regiune = new char[ strlen( regiune ) + 1 ];
    strcpy( this -> regiune, regiune );

    return *this;
}

void Municipiu::afisare()
{
    Oras::afisare();
    cout << "Numele regiunii: " << regiune << endl ;
}

Municipiu::~Municipiu()
{
    delete[] regiune;
}