#ifndef __ORAS_H
#define __ORAS_H

#include "localitate.h++"

class Oras : public Localitate{

protected:
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.

public:
    Oras();
    Oras(int);
    ~Oras() = default;
};


#endif