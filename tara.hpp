#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara{
    Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
    Tara ();
    Tara (Localitate **);
    
    friend ostream& operator << (ostream &, Tara &);
    Tara &operator=(Tara &);
    
    int getVenit ();
    int getLocuitori(void);
    
    ~Tara ();
};

#endif