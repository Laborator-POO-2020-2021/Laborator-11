#ifndef TARA_HPP
#define TARA_HPP

#include "municipiu.hpp"
#include "capitala.hpp"

class Tara{
    Localitate **v;
public:
    Tara();
    Tara (Localitate**);
    Tara(Tara& obj);
    Tara& operator = (Tara& obj);

    friend ostream& operator << (ostream&, Tara&);

    int getLocuitori();
    int getVenit();

    ~Tara();
};

#endif
