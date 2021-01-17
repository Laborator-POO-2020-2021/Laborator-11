#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras: public Localitate
{
protected:
    int bonus_venit;

public:
    Oras();
    Oras(const char *, int, int, int);
    Oras(const Oras &);
    Oras& operator=(const Oras &);

    virtual int Get_venit();
    virtual int Get_nr_locuitori();
    virtual void afisare();

    ~Oras();
};
#endif
