#ifndef MUNINCIPIU_HPP
#define MUNINCIPIU_HPP

#include "oras.hpp"

class Munincipiu : public Oras
{
protected:
    char *regiune;

public:
    Munincipiu();
    Munincipiu(const char *, const int, const int, const int, const char *);
    ~Munincipiu();
    Munincipiu &operator=(const Munincipiu &);
    virtual void print();
    virtual int get_populatie();
    virtual int get_venit();
};

#endif