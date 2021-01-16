#include <iostream>
#include <cstring>
using namespace std;

#ifndef CAPITALA
#define CAPITALA

class Capitala
{
protected:
    char *tara;

public:
    Capitala();
    Capitala(char*);
    void afisare();

};


#endif

