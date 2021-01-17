#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <string.h>

using namespace std;

class Baza
{
public:
    virtual ~Baza() = 0;
    virtual void afisare() = 0;
    virtual int getVenit() = 0;
};

#endif // BAZA_HPP
