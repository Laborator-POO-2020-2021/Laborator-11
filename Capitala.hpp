//
// Created by 40763 on 1/16/2021.
//

#ifndef LAB11_CAPITALA_HPP
#define LAB11_CAPITALA_HPP
#include "Oras.hpp"

class Capitala: public Oras{
protected:
    char* tara;
public:
    Capitala();
    Capitala(char*, int, int, int, char*);
    Capitala& operator=(Capitala&);
    Capitala(Capitala&);
    ~Capitala();
};


#endif //LAB11_CAPITALA_HPP
