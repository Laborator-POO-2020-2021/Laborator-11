#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala: public Oras
{
protected:
    char *tara;

public:
    Capitala();
    Capitala(const char *, int, int, int, const char *);
    Capitala(const Capitala &);
    Capitala& operator=(const Capitala &);

    int Get_venit();
    int Get_nr_locuitori();
    void afisare();

    ~Capitala();
};
#endif
