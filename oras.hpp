#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras : public Localitate
{
protected:
    int bonus_venit;

public:
    Oras();
    Oras(const char *, const int, const int, const int);
    ~Oras();
    Oras &operator=(const Oras &);
    virtual void print();
    virtual int get_populatie();
    virtual int get_venit();
};

#endif