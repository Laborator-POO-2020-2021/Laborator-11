#ifndef ORAS_HPP
#define ORAS_HPP

#include "localitate.hpp"

class Oras: public Localitate
{
    int bonus_venit;

    public:
        Oras();
        Oras(const char*, int, int, int);
        Oras(const Oras&);
        ~Oras();
        Oras &operator=(const Oras&);
        friend ostream& operator<<(ostream&, const Oras&);
        void print() { cout << *this; }
        virtual Oras* clone() const {return new Oras(*this); }
        int getVenitMediu();
};

#endif