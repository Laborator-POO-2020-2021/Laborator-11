#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <string.h>

using namespace std;

class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*, int, int);
    Localitate(const Localitate&);
    Localitate& operator=(const Localitate&);
    const char* getnume() const;
    int getloc() const;
    int getvenitm() const;
    void setvenitm(int);
    virtual int getvenit();
    virtual void afisare();
    virtual ~Localitate();
};

#endif // LOCALITATE_HPP
