#include "tara.hpp"


Tara::Tara()
{
    v = NULL;
}
Tara::Tara(Localitate** l)
{
    int k = 0;
    while (l[k] != NULL){
        k++;
    }

    v = new Localitate*[k + 1];

    int i = 0;
    for (i = 0; i < k; i++){
        this->v[i] = l[i];
    }
    this->v[i] = NULL;
}
Tara::Tara(const Tara& obj)
{
    v = NULL;
    *this = obj;
}
Tara& Tara::operator=(const Tara& obj)
{
    if(v != NULL){
        for(int i = 0; v[i] != NULL; i++){
            delete v[i];
        }
        delete[] v;
    }

    int k = 0;
    while (obj.v[k] != NULL){
        k++;
    }

    v = new Localitate*[k + 1];

    int i = 0;
    for (i = 0; i < k; i++){
        v[i] = obj.v[i];
    }
    v[i] = NULL;

    return *this;
}
Tara::~Tara()
{
    if (v != NULL){
        for(int i = 0; v[i] != NULL; i++){
            delete v[i];
        }
        delete[] v;
    }
}
ostream& operator<<(ostream& out, const Tara& obj)
{
    out << "Localitatile sunt:" << endl;
    for (int i = 0; obj.v[i] != NULL; i++){
        obj.v[i]->Afisare();
        out << endl;
    }
    return out;
}
double Tara::Nr_loc()
{
    double n = 0;
    for (int i = 0; v[i] != NULL; i++){
        n += v[i]->Nr_loc();
    }

    return n;
}
double Tara::Venit_m()
{
    double n = 0;
    for (int i = 0; v[i] != NULL; i++){
        n += v[i]->Venit_m();
    }

    return n;
}