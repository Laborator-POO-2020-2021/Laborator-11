#pragma once
#include "Localitate.hpp"

class Tara{
private:
        Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
        Tara();
        Tara(Localitate **);
        ~Tara();
        Tara(const Tara&);
        Tara &operator=(const Tara&);
        friend ostream &operator<<(ostream &, const Tara&);
        int getNumarLocuitoriTara();
        float getVenitMediuTara();
};