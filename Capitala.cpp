#include "Capitala.hpp"

Capitala::Capitala(): Oras(), tara(NULL)
{}

Capitala::Capitala( const char* nume1, int nr_locuitori, int venit_mediu, int bonus_venit, const char* tara ): Oras( nume1, nr_locuitori, venit_mediu, bonus_venit )
{
    this -> tara = new char[ strlen( tara ) + 1 ];
    strcpy( this -> tara, tara );
}

Capitala::Capitala( const Capitala& obj )
{
    tara  = NULL;
    *this = obj;
}

Capitala& Capitala::operator=( const Capitala& obj )
{
    Oras::operator=( obj );
    if( tara != NULL )
        delete[] tara;
    this -> tara = new char[ strlen( tara ) + 1 ];
    strcpy( this -> tara, tara );

    return *this;
}

void Capitala::afisare()
{
    Oras::afisare();
    cout << "Numele tarii: " << tara << endl ;
}

Capitala::~Capitala()
{
    delete[] tara;
}