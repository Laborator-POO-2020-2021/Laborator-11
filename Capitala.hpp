//
// Created by Bogdan on 15.01.2021.
//

#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include "Oras.hpp"
class Capitala:virtual public Oras{
    char *tara;
public:
    Capitala();
    Capitala(const char*,int,int,int,const char*);
    Capitala(const Capitala&);
    Capitala& operator=(const Capitala&);
    void afisare();
    ~Capitala();

};
#endif //CAPITALA_HPP
