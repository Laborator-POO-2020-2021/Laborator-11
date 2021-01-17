#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"
#include "oras.hpp"
#include "municipiu.hpp"
#include "capitala.hpp"
#include <typeinfo>

class Tara
{
    Localitate **v;
public:
    Tara();
    Tara(Localitate**);
    Tara(Tara&);
    Tara& operator=(const Tara&);
    int getpop();
    double getvenit_tara();
    char* get_tara();
    void afisare_tara();
    ~Tara();
};

#endif // TARA_HPP
