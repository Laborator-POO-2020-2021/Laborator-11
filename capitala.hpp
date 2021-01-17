#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala : public Oras
{
private:
    char *tara;

public:
    Capitala();
    Capitala(const char *, const int, const int, const int, const char *);
    Capitala(const Capitala &);
    ~Capitala();
    Capitala &operator=(const Capitala &);

    friend ostream& operator<<(ostream &, Capitala &);

    void afisare(ostream &);
    int getVenit_mediu();
};

#endif