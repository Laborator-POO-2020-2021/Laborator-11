#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include <iostream>
#include <cstring>
using namespace std;
#include "oras.hpp"

class Capitala:public Oras
{
    char *tara;
public:
    Capitala();
    Capitala(char *, int, int, int, char *);
    char* getTara() const;
    friend ostream& operator<<(ostream& out, Capitala&);
    void afisare();
    Capitala(Capitala&);
    Capitala & operator=(const Capitala &);
    ~Capitala();
};

#endif
