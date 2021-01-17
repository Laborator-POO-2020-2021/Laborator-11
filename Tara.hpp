//
// Created by Bogdan on 17.01.2021.
//

#ifndef TARA_HPP
#define TARA_HPP
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include "Localitate.hpp"
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
#endif //TARA_HPP
