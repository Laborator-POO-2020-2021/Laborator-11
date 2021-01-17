#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

//clasa oras mosteneste clasa Localitate
class Oras: public Localitate
{
    int bonus_venit;
    //venitul unui oras este venitul localitatii + bonus_venit
public:
    Oras();
    Oras(const char*, int, int, int); //parametrii localitate + oras
    //~Oras(); neavand char* (variabila dinamica), nu e nevoie
    //metode:
    int getVenit(); //venit_loc + bonus_venit

    void afisare();
};


#endif // ORAS_HPP
