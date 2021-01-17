#include <iostream>
#include "Localitate.hpp"
#include "Oras.hpp"
#include "Municipiu.hpp"
#include "Capitala.hpp"
#include <typeinfo>

using namespace std;

class Tara{
    Localitate **v; //hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.
public:
    Tara();
    Tara(Localitate **v);
    ~Tara();
    void afisare_tara();
    float venit_mediu_tara();
    int nr_loc();
    char *get_nume_tara();
    void afisare_detalii();
};
