#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "libraries.hpp"
#include "oras.hpp"

class Municipiu: public Oras{
    protected:
        char *regiune;
    public:
    Municipiu();
    ~Municipiu();
     Municipiu(const char *, int, int, int, const char *);
    char* getRegiune();
    Municipiu& operator=(const Municipiu&);
    
    friend ostream& operator<<(ostream&, Municipiu&);
    void afisare(ostream&);

};

#endif