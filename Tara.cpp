//
// Created by 40763 on 1/16/2021.
//

#include "Tara.hpp"

Tara::Tara(){};
Tara::Tara(Localitate **v)
{
    this->v = v;
}

Tara::~Tara(){
    if(this->v != NULL)
    {
        delete []this->v;
    }
};

int Tara::getNrLoc()
{
    int i = 0;
    int nr_locuitori = 0;
    while(v[i] != NULL)
    {
        nr_locuitori = nr_locuitori + v[i]->getNrLoc();
        i++;
    }
    return nr_locuitori;
}

double Tara::getVenit()
{
    int i = 0;
    int venit = 0;

    while(v[i] != NULL)
    {
        venit = venit + v[i]->getVenit();
        i++;
    }
    return (venit / i);
}

void Tara::afisare()
{
    int i = 0;
    cout << endl;
    while(v[i] != NULL)
    {
        cout << "Nr locuitori localitate: " << v[i]->getNrLoc()<<endl;
        cout << "Venit mediu localitate: " << v[i]->getVenit() <<endl;
        i++;
    }
    cout << endl;
}

Tara::Tara(const Tara &tar) {
    *this = tar;
}
