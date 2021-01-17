#ifndef __CAPITALA_H
#define __CAPITALA_H

#include "oras.h++"

class Capitala : public Oras{

private:
    char* tara;

public:
    Capitala();
    Capitala(char *);
    ~Capitala();
};


#endif