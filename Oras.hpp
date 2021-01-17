#ifndef ORAS_HPP
#define ORAS_HPP

#include "Localitate.hpp"

class Oras : public Localitate{
    int bonus_venit;
public:
    Oras();
    Oras(const char*, const int, const int, const int);
    Oras(const Oras&);
    Oras& operator=(const Oras&);

    friend ostream& operator<<(ostream&, const Oras&);
    void afisare(){cout<<*this;}
    virtual Oras* clone() const { return new Oras(*this); }
    int getLocuitori();
    int getVenit();
};


#endif