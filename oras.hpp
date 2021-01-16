#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras : public Localitate
{
protected:
    int bonus_venit; 
public:
    Oras();
    Oras(int, const char*, int, int);
    Oras &operator=(const Oras&);
    
    int getBonusVenit();
    void afisare();
};



#endif
