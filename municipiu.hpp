#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "oras.hpp"

class Municipiu: public Oras
{
    char *regiune;

    public:
        Municipiu();
        Municipiu(const char*, int, int, int, const char*);
        Municipiu(const Municipiu&);
        ~Municipiu();
        Municipiu& operator=(const Municipiu&);
        friend ostream& operator<<(ostream&, const Municipiu&);
        void print() { cout << *this; }
        virtual Municipiu* clone() const { return new Municipiu(*this); }
        int getVenitMediu();
};

#endif