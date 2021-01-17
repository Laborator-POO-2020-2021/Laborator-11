#ifndef ORAS_HPP
#define ORAS_HPP
#include <iostream>
#include <cstring>
#include "localitate.hpp"
using namespace std;

class Oras:public Localitate
{
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
    Oras();
    Oras(char *,int, int, int);
    virtual int getBonus() const;
    friend ostream& operator<<(ostream& out, Oras&);
    virtual void afisare();
    Oras(Oras&);
    virtual void setBonus(int );
    Oras & operator=(const Oras &);
    virtual ~Oras();
};

#endif // ORAS_HPP
