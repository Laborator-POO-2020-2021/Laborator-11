#ifndef __MUNICIPIU_H
#define __MUNICIPIU_H

#include "oras.h++"

class Municipiu : public Oras{

private:
    char* regiune;

public:
    Municipiu();
    Municipiu(char *);
    ~Municipiu();
};


#endif