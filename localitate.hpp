#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include "libraries.hpp"

class Localitate {
    protected:
    char *nume;
    int nr_locuitori;
    int venit_mediu;
    public:
        Localitate();
        ~Localitate();
        Localitate(const char*, int, int);
        Localitate& operator=(const Localitate&);
        char *getNume();
        int get_NrLoc();
        int getVenit_mediu();
        friend ostream &operator<<(ostream&, Localitate&);
        virtual void afisare(ostream&);
};

#endif