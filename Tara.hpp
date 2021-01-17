#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara {
    Localitate **v;
public:
    Tara();

    Tara(Localitate **);

    Tara &operator=(const Tara &);

    int get_nr_locuitori();

    int get_venit_mediu();

    void afisare();

    ~Tara();
};


#endif
