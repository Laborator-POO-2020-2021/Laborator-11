#ifndef Municipiu_hpp
#define Municipiu_hpp

#include "Oras.hpp"

class Municipiu : public Oras
{
    char *regiune;
public:
    Municipiu();
    Municipiu(const char*,int,int,int,const char*);
    Municipiu(const Municipiu&);
    ~Municipiu();

    int getVenit();
    Municipiu& operator= (const Municipiu&);
    void afisare();
};

#endif // Municipiu_hpp
