#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>

using namespace std;

class Localitate {
protected:
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();

    Localitate(const char *, int, int);

    Localitate(const Localitate &);

    Localitate &operator=(const Localitate &);

    int get_nr_locuitori();

    int get_venit_mediu();

    char *get_nume();

    ~Localitate();

};


#endif
