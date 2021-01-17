#ifndef TARA_HPP
#define TARA_HPP

#include "Municipiu.hpp"
#include "Capitala.hpp"

class Tara
{
    Localitate **T; 
public:
    Tara();
    Tara( Localitate** );
    Tara& operator=( const Tara& );
    int getLocuitori();
    int getVenitmediu();    
    

    void afisare();
    ~Tara();

};

#endif