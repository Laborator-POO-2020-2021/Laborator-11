#include "tara.hpp"

Tara::Tara(): v(NULL){}

Tara::Tara(Localitate **v)
{

    this->v = v;
}

void Tara::afisare(){
    for(int i = 0; v[i] != NULL; i ++){
        v[i]->afisare();
    }
}

int Tara::Nr_tot_loc(){
    int nr_tot = 0;
    for(int i = 0; v[i] != NULL; i ++){
        nr_tot = nr_tot + v[i]->getNr_locuitori();
    }

    return nr_tot;
}

int Tara::Venit_mediu(){
    int ven = 0;
    for(int i = 0; v[i] != NULL; i ++){
        ven = ven + v[i]->getVenit_mediu();
    }

    return ven;
}