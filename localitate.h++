#ifndef __LOCALITATE_H
#define __LOCALITATE_H

#include <iostream>
#include <cstring>

class Localitate {

protected:
    char* nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(char *, int, int);
    ~Localitate();
    
};


#endif