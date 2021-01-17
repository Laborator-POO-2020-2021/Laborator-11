#ifndef _ORAS_
#define _ORAS_


#include "localitate.hpp"
class Oras : public Localitate{
        int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.

        public:
    Oras();
    Oras(int, const char *, int, int);
    void afisare();
    int getBonus_venit();
};

#endif