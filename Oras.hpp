#ifndef Oras_hpp
#define Oras_hpp

#include "Localitate.hpp"

class Oras : public Localitate
{
    int bonus_venit;
public:
    Oras();
    Oras(const char*,int,int,int);
    Oras(const Oras&);
    ~Oras();
    int getVenit();

    Oras& operator= (const Oras&);
    void afisare();
};

#endif // Oras_hpp
