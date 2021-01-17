#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

class Capitala : public Oras{
    char* tara;
public:
    Capitala();
    Capitala(const char*,const int,const int,const int, const char*);
    Capitala(const Capitala&);
    Capitala& operator=(const Capitala&);
    ~Capitala();

    friend ostream& operator<<(ostream& ,const Capitala&);
    void afisare() {cout<<*this;}
    virtual Capitala* clone() const { return new Capitala(*this); }
    int getVenit();
    int getLocuitori();
};

#endif