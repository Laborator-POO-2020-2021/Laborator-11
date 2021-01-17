#ifndef LOCALITATE
#define LOCALITATE

#include <iostream>
#include <cstring>

using namespace std;

class Localitate {
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char *nume, int nr_locuitori, int venit_mediu);
    virtual ~Localitate();
    int get_venit_mediu();
    int get_nr_locuitori();
    const char *get_nume() const;
    virtual void afisare();
    virtual int get_venit();
};

#endif // LOCALITATE
