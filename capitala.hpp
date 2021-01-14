#ifndef CAPITALA_H
#define CAPITALA_H
#include "oras.hpp"

class Capitala: public Oras
{
        char *tara;
    public:
        Capitala ();
        Capitala (const char*, const int, const int, const int, const char*);
        Capitala& operator = (Capitala& obj);
        friend ostream& operator << (ostream &out, Capitala &obj);
        double Get_Venit ();
        double Get_Population ();
        ~Capitala ();
};

#endif