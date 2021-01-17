#ifndef CAPITALA_HPP_
#define CAPITALA_HPP_

#include "oras.hpp"
#include "libraries.hpp"

class Capitala : public Oras
{
    protected:
        char *tara;
    public:
    Capitala();
    ~Capitala();
    Capitala(const char *, int, int, int, const char *); //
    char* getTara();
    Capitala &operator=(const Capitala &);

    friend ostream& operator<<(ostream&, Capitala&);
    void afisare(ostream &);
};

#endif