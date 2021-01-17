#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate **local){
    int i = 0;
    //parcurgem vectorul pentru a afla nr de elemente
    while (local[i] != NULL)
        i++;
    //general un v dupa nr de elemente ale vectorului precedent cu un spatiu in plus pt NULL
    v = new Localitate *  [i+1];
    v[i] = NULL;    //punem NULL pe ultima pozitie

    //adaugam si restul de elmente
    i = 0;
    while (local[i] != NULL){
        v[i] = local[i];
        i++;
    }
}

Tara &Tara::operator=(Tara &obj){
    if (this->v != NULL)
        delete[]v;
    
    int i=0;
    while (obj.v[i] != NULL)
        i++;
    
    v = new Localitate* [i+1];
    v[i] = NULL;
    
    i=0;
    while (obj.v[i] != NULL){
        this->v[i] = obj.v[i];
        i++;
    }

    return *this;
}

Tara::~Tara(){
    delete[] v;
}

ostream &operator<<(ostream &out, Tara &obj){
    int index = 0;
    while (obj.v[index] != NULL)
        index++;

    out << "----------------------Tara---------------------- " << endl;
    for (int i = 0; i < index; i++)
    {
        out << (*(obj.v[i]))<< endl;
    }
    out << "-----------------------end---------------------- " << endl;
    return out;
}

int Tara::getVenit(){
    int i = 0, venit = 0;
    while (v[i] != NULL){
        venit += v[i]->getVenit();
        i++;
    }
    return venit;
}

int Tara::getLocuitori(){
    int i = 0, locuitori = 0;
    while (v[i] != NULL){
        locuitori += v[i]->getLocuitori();
        i++;
    }
    return locuitori;
}