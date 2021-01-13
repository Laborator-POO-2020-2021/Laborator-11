#ifndef LOCALITATE_HPP_
#define LOCALITATE_HPP_

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
    Localitate(const Localitate &);
    ~Localitate();
    Localitate &operator=(const Localitate &);

    friend ostream &operator<<(ostream &, Localitate &);
    virtual void print(ostream &);

    int getLocuitori() const;
    virtual int getVenit_mediu();


};

#endif