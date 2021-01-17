#ifndef Baza_hpp
#define Baza_hpp

#include <iostream>
#include <cstring>

using namespace std;

class Baza
{
public:
    virtual ~Baza() = 0;
    virtual void afisare() = 0;
    virtual int getVenit() = 0;

};


#endif // Baza_hpp
