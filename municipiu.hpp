#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP
#include <iostream>
#include <cstring>
using namespace std;
#include "oras.hpp"


class Municipiu:public Oras
{
    char * regiune;
public:
    Municipiu();
    Municipiu(char *, int, int, int, char *);
    char* getReg() const;
    friend ostream& operator<<(ostream& out, Municipiu&);
    void afisare();
    Municipiu(Municipiu& );
    Municipiu & operator=(const Municipiu &);
    ~Municipiu();
};

#endif // MUNICIPIU_HPP
