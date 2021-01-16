//
// Created by 40763 on 1/16/2021.
//

#include "Oras.hpp"

Oras::Oras():bonus_venit(0), Localitate()  {
}

Oras::Oras(char *nume, int nr_loc, int venit, int bonus):Localitate(nume,nr_loc, venit), bonus_venit(bonus) {
}

Oras::Oras(const Oras &orasel) {
    *this = orasel;
}

