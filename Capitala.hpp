#include <iostream>
#include "Oras.hpp"
using namespace std;

class Capitala:public Oras{
    char *tara;
public:
    Capitala();
    Capitala(const char *nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *tara);
    ~Capitala();
    void afisare();
    char* get_tara();
};

