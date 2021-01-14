#include <iostream>
#include <cstring>
#include "localitate.hpp"

class Tara
{
        Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
    public:
        Tara ();
        Tara (Localitate **);
        ~Tara ();
};