#ifndef TARA_H
#define TARA_H

#include "localitate.h"

class Tara 
{
    Localitate** v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
    Tara();
    Tara(Localitate**);
    ~Tara();
    void afisare();
    Tara(const Tara&);
    Tara& operator =(const Tara&);
    int nrloc_tot();
    int venit_tot();
};

#endif