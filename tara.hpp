#ifndef TARA_HPP
#define TARA_HPP

#include "localitate.hpp"

class Tara{
    Localitate **v; 
public:
    Tara();
    Tara(Localitate**);
    Tara(const Tara&);
    Tara& operator=(const Tara&);
    ~Tara();
    friend ostream& operator<<(ostream& out, const Tara& obj);
    double Nr_loc();
    double Venit_m();
};

#endif