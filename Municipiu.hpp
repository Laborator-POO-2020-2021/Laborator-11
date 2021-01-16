#include <iostream>
#include <cstring>
using namespace std;

#ifndef MUNICIPIU
#define MUNICIPIU

class Municipiu
{
    protected:
    char * regiune;

public:

    Municipiu();
    Municipiu(char*);
    void afisare();

};
#endif

