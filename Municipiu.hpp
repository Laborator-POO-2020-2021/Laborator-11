

#ifndef LAB11_MUNICIPIU_HPP
#define LAB11_MUNICIPIU_HPP
#include "Oras.hpp"

class Municipiu: public Oras {
    char *regiune;
public:
    Municipiu();
    Municipiu(char*, int, int, int, char*);
    ~Municipiu();
    Municipiu(const Municipiu&);
};


#endif //LAB11_MUNICIPIU_HPP
