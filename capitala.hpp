#ifndef CAP_HPP
#define CAP_HPP
#include "util.hpp"
#include "oras.hpp"

class Capitala : public Oras
{
    char *tara;

public:
    Capitala();
    Capitala(const char *, int, int, int, const char *);
    ~Capitala();
    char *getTara();
    void afisare();
};

#endif