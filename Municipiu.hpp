#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP

#include "Oras.hpp"

//clasa Municipiu mosteneste clasa Oras
class Municipiu: public Oras
{
    char *regiune;

public:
    Municipiu();
    //constructorul va avea parametrii aferenti celor 2 clase mostenite anterior:
    // Municipiu mosteneste oras, dar oras mosteneste localitate
    // Municipiu -> oras -> localitate (baza)
    Municipiu(const char*, int, int, int, const char*);
    ~Municipiu();
    //metode:
    void afisare();
};




#endif // MUNICIPIU_HPP
