#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu: public Oras{
    char* regiune;
public:
    Municipiu();
    Municipiu(const char*, int, int, int, const char*);
    
    Municipiu &operator=(const Municipiu &);
    friend ostream& operator << (ostream &, Municipiu &);
    
    int getVenit();
    int getLocuitori();

    ~Municipiu();
};

#endif