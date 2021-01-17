#ifndef Localitate_hpp
#define Localitate_hpp

#include "Baza.hpp"

class Localitate : virtual public Baza
{
    char* nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*,int,int);
    Localitate(const Localitate&);
    ~Localitate();
    int getLoc();
    int getVenit();

    Localitate& operator= (const Localitate&);
    void afisare();
};

#endif // Localitate_hpp
