#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras: public Localitate
{
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
    Oras();
    Oras(const char*, int, int, int);
    int getbonus() const;
    void setbonus(int a);
    int getvenit();
    void afisare();
};

#endif // ORAS_HPP
