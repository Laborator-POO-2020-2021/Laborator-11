#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara
{
    Localitate **v;

    public:
        Tara();
        Tara(Localitate**);
        Tara(const Tara&);
        ~Tara();
        Tara& operator=(const Tara&);
        friend ostream& operator<<(ostream&, const Tara&);
        int getNumarLocuitoriTara();
        int getVenitMediuTara();
};

#endif
