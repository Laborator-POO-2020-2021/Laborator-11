#ifndef TARA_HPP
#define TARA_HPP

#include "capitala.hpp"
#include "municipiu.hpp"

class Tara
{
protected:
    Localitate **v;
    int nr_loc;

public:
    Tara();
//    Tara(Localitate **);
    Tara(const Tara &);
    Tara& operator=(const Tara &);

    void adauga(Localitate *);
    void afisare();

    int Get_venit();
    int Get_nr_locuitori();

    ~Tara();
};
#endif
