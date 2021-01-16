#include <iostream>
#include <cstring>
#include "localitate.hpp"

class Tara
{
        Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
    public:
        Tara ();
        Tara (Localitate **);
        Tara (Tara &obj);
        friend ostream& operator << (ostream &out, Tara &obj);
        Tara& operator = (Tara &obj);
        double Get_Venit ();
        double Get_Population ();
        ~Tara ();
};