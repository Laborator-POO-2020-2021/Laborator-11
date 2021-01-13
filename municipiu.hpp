#ifndef MUNICIPIU_HPP_
#define MUNICIPIU_HPP_

#include "oras.hpp"

class Municipiu : public Oras
{
private:
    char *regiune;
public:
    Municipiu();
    Municipiu(const char *, int, int, int, const char *);
    Municipiu(const Municipiu &);
    ~Municipiu();
    Municipiu &operator=(const Municipiu &);

    friend ostream& operator<<(ostream &, Municipiu &);
    void print(ostream &);

    int getVenit_mediu() const;
};

#endif