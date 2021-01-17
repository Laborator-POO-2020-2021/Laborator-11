#ifndef __ORAS_H
#define __ORAS_H

#include "localitate.h++"

class Oras : public Localitate{

protected:
    int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.

public:
    Oras();
    Oras(const int, Localitate);
    ~Oras() = default;

    Oras &operator=(const Oras&);
    friend std::ostream& operator<<(std::ostream&, Oras&);
};


#endif