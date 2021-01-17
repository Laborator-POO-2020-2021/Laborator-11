#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras : public Localitate {
protected:
    int bonus_venit;
public:
    Oras();

    Oras(const Oras &);

    Oras(int, const char *, int, int);

    Oras &operator=(const Oras &);

    ~Oras();
};


#endif
