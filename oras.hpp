#ifndef ORAS_HPP
#define ORAS_HPP

#include "libraries.hpp"
#include "localitate.hpp"

class Oras: public Localitate{
    protected:
        int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
    public:
    Oras();
    ~Oras();
    Oras(const char*, int, int, int);
    Oras& operator=(const Oras&);
    int getBonus();
    friend ostream& operator<<(ostream&, Oras&);
    void afisare(ostream&);
};
#endif