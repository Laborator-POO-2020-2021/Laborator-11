#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include "utils.hpp"

class Localitate
{
protected:
    char *nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(const char *, const int, const int);
    ~Localitate();
    Localitate &operator=(const Localitate &obj);
    virtual void print();
    virtual int get_populatie();
    virtual int get_venit();
};

#endif