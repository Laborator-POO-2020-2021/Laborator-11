#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>

using namespace std;

class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(const char *, const int, const int);
    Localitate(const Localitate &);
    ~Localitate();
    Localitate &operator=(const Localitate &);

    friend ostream &operator<<(ostream &, Localitate &);

    virtual void afisare(ostream &);
    int getLocuitori();
    virtual int getVenit_mediu();
};

#endif