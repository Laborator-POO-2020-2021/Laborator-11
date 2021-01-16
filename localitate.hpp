#pragma once
#include "utils.hpp"

class Localitate
{
protected:
    char *nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(const char *, int, int);
    virtual ~Localitate();
    Localitate(const Localitate &);
    Localitate &operator=(const Localitate &);
    friend ostream& operator<<(ostream &, const Localitate&);

    virtual void print(){cout<<*this;}
    virtual Localitate* clone() const { return new Localitate(*this); }

    int getNrLocuitori(){return nr_locuitori; }
    virtual int getVenit() {return venit_mediu;}
};