//
// Created by 40763 on 1/16/2021.
//

#ifndef LAB11_ORAS_HPP
#define LAB11_ORAS_HPP

#include "Localitate.hpp"

class Oras:public Localitate {
protected:
    int bonus_venit;
public:
    Oras();
    Oras(char*, int, int, int);
    Oras(const Oras&);
};


#endif //LAB11_ORAS_HPP
