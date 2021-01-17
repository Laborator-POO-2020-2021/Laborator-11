#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras: public Localitate
{
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
    Oras();
    Oras( const char*, int, int, int );
    Oras( const Oras& );
    Oras& operator=( const Oras& );


    void afisare();
    ~Oras();
};

#endif