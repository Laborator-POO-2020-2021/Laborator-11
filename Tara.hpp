#include <iostream>
#include <cstring>

#include "Localitate.hpp"

class Tara{
    Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.

public:
    Tara();
    Tara(Localitate **);
    Tara(Tara &x);
    ~Tara();
    friend ostream& operator<< (ostream &out, Tara &x);
    Tara& operator= (Tara &x);
    double Venit_T();
    double Populatie_T();
};
