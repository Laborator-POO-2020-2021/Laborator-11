#ifndef ORAS_HPP
#define ORAS_HPP


# include "localitate.hpp"

class Oras: public Localitate{
    int bonus_venit;
public:
    Oras();
    Oras(int, const char*, int, int);
    Oras(const Oras&);
    Oras& operator=(const Oras&);
    void Afisare();
    int Nr_loc();
    int Venit_m();
};

#endif