#pragma once
#include "oras.hpp"

class Municipiu : public Oras
{
protected:
        char *regiune;

public:
        Municipiu();
        Municipiu(const char *, int, int, int, const char *regiune);
        ~Municipiu();
        Municipiu(const Municipiu &);
        Municipiu &operator=(const Municipiu &);
        friend ostream &operator<<(ostream &, const Municipiu &);

        void print(){cout<<*this;}
        virtual Municipiu* clone() const { return new Municipiu(*this); }
         int getVenit() {return venit_mediu + bonus_venit;}
};