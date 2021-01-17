#ifndef Tara_hpp
#define Tara_hpp

#include "Municipiu.hpp"
#include "Capitala.hpp"

class Tara
{
    Localitate **V;
public:
    Tara();
    Tara(Localitate**);
    ~Tara();
    int getPop();
    void afisare();
    float getVenitmediu();
};

#endif // Tara_hpp
