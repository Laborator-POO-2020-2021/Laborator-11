#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;

    public:
        Localitate();
        Localitate(const char*, int, int);
        Localitate(const Localitate&);
        ~Localitate();
        Localitate& operator=(const Localitate&);
        int getLocuitori() const;
        friend ostream& operator<<(ostream&, const Localitate&);
        virtual int getVenitMediu() { return venit_mediu; }
        virtual Localitate* clone() const { return new Localitate(*this); }
        virtual void print() { cout << *this; }

};

#endif