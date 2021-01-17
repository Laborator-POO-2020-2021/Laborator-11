#include "Tara.hpp"

Tara::Tara()
{
    T = NULL;
}

Tara::Tara( Localitate** T )
{
    this -> T = new Localitate*[4];
    this -> T = T;
}

Tara& Tara::operator=( const Tara& obj )
{   
    for( int i = 0; i < 4; i++ )
    {
        if( T[i] != NULL )
            delete T[i];
    }
    if( T != NULL )
        delete[] T;

    T = new Localitate*[4];
    for( int i = 0; i < 4; i++ )
    {
        T[i] = obj.T[i];
    }
    
}

void Tara::afisare()
{
    int i = 0;
    while( T[i] )
        {
            T[i] -> afisare();
            i++;
        }
}

int Tara::getLocuitori()
{
    int i = 0, s = 0;
    while( T[i] )
        {
            s = s + T[i] -> getLocuitori();
            i++;
        }

    return s;
}

int Tara::getVenitmediu()
{
    int i = 0, s = 0;
    while( T[i] )
        {
            s = s + T[i] -> getVenitmediu();
            i++;
        }

    return s;
}

Tara::~Tara()
{
    for( int i = 0; i < 4; i++ )
        delete T[i];
    delete[] T;
}