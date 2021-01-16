#ifndef CAPITALA_HPP
#define CAPITALA_HPP


#include "oras.h"


class Capitala : public Oras
{
    char* tara;
public:
    Capitala();
    Capitala(const char*,int, const char*, int, int);
    Capitala(const Capitala&);
    Capitala& operator =(const Capitala&);
    ~Capitala();
    void afisare();

};






#endif // !CAPITALA_HPP

