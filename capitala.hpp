#ifndef CAPITALA_HPP
#define CAPITALA_HPP    

#include "oras.hpp"

class Capitala: public Oras
{
    char *tara;

    public:
        Capitala();
        Capitala(const char*, int, int, int, const char*);
        Capitala(const Capitala&);
        ~Capitala();
        Capitala& operator=(const Capitala&);
        friend ostream& operator<<(ostream&, const Capitala&);
        void print() { cout << *this; }
        virtual Capitala* clone() const { return new Capitala(*this); }
        int getVenitMediu();
};

#endif
