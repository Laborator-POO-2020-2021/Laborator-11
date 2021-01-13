#ifndef CAPITALA_HPP_
#define CAPITALA_HPP_

#include "oras.hpp"

class Capitala : public Oras
{
private:
    char *tara;

public:
    Capitala();
    Capitala(const char *, int, int, int, const char *);
    Capitala(const Capitala &);
    ~Capitala();
    Capitala &operator=(const Capitala &);

    friend ostream& operator<<(ostream &, Capitala &);
    void print(ostream &);

    int getVenit_mediu() const;
};

#endif