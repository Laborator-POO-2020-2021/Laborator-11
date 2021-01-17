#ifndef Capitala_hpp
#define Capitala_hpp

#include "Oras.hpp"

class Capitala : public Oras
{
    char *tara;
public:
    Capitala();
    Capitala(const char*,int,int,int,const char*);
    Capitala(const Capitala&);
    ~Capitala();

    int getVenit();
    Capitala& operator= (const Capitala&);
    void afisare();
};

#endif // Capitala_hpp
