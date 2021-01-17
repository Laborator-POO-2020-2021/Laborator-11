#ifndef TARA_HPP
#define TARA_HPP

#include "municipiu.hpp"
#include "capitala.hpp"
#include "localitate.hpp"

class Tara{
    Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
    Tara();
    Tara(Localitate**);
    Tara(const Tara&);
    Tara& operator=(const Tara&);
    void afisare();
    int Locuitori();
    int getVenit_mediu();
    ~Tara();
};

#endif
