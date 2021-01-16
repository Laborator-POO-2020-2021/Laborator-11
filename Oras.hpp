#include <iostream>
#include <cstring>
using namespace std;

#ifndef ORAS
#define ORAS

#include "Municipiu.hpp"
#include "Capitala.hpp"

class Oras:public Capitala, public Municipiu
{
protected:
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit

public:
    Oras();
    Oras(char*, char*, int);
    void afisare();


};

#endif


