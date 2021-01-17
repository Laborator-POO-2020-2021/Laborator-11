#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Localitate{
    char* nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*,const int,const int);
    Localitate(const Localitate&);
    Localitate& operator=(const Localitate&);
    ~Localitate();

    friend ostream& operator<<(ostream&, const Localitate&);
    virtual Localitate* clone() const { return new Localitate(*this); }
    virtual void afisare(){cout<<*this;}
    virtual int getLocuitori();
    virtual int getVenit();
};

#endif