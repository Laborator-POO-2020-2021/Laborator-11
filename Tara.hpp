#ifndef TARA_HPP
#define TARA_HPP

#include "Localitate.hpp"

class Tara{
    Localitate **v;
public:
    Tara();
    Tara(Localitate **v);
    Tara(const Tara &obj);
    Tara& operator=(const Tara&);
    ~Tara();

    friend ostream& operator<<(ostream&, const Tara&);
    int getVenit();
    int getLocuitori();
};

#endif