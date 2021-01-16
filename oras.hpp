#ifndef ORAS_HPP_
#define ORAS_HPP_

#include "localitate.hpp"

class Oras : public Localitate
{
protected:
    int bonus_venit;

public:
    Oras();
    Oras(const char *, int, int, int);
    Oras(const Oras &);
    Oras &operator=(const Oras &);

    friend ostream& operator<<(ostream &, Oras &);
    void print(ostream &);

    virtual int getVenit_mediu();

};

#endif