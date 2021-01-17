#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

class Municipiu : public Oras{
    char* regiune;
public:
    Municipiu();
    Municipiu(const char*,const int,const int,const int, const char*);
    Municipiu(const Municipiu&);
    Municipiu& operator=(const Municipiu&);
    ~Municipiu();

    friend ostream& operator<<(ostream&, const Municipiu&);
    void afisare(){cout<<*this;}
    virtual Municipiu* clone() const { return new Municipiu(*this); }
    int getVenit();
    int getLocuitori();
};

#endif