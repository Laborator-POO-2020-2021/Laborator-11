#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala : public Oras
{
protected:
    char *tara;

public:
    Capitala();
    Capitala(const char *, const int, const int, const int, const char *);
    ~Capitala();
    Capitala &operator=(const Capitala &);
    virtual void print();
    virtual int get_populatie();
    virtual int get_venit();
};

#endif