#pragma once
#include "oras.hpp"

class Capitala : public Oras
{
protected:
        char *tara;

public:
        Capitala();
        Capitala(const char *, int, int, int, const char *tara);
        ~Capitala();
        Capitala(const Capitala &);
        Capitala &operator=(const Capitala &);
        friend ostream &operator<<(ostream &, const Capitala &);

        void print(){ cout<<*this;}
        virtual Capitala* clone() const { return new Capitala(*this); }
         int getVenit() {return venit_mediu + bonus_venit;}
};
