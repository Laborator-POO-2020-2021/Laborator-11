#include "tara.hpp"

Tara::Tara(){
    v = NULL;
}

Tara::Tara(Localitate**v1){
    v = new Localitate*[4];
    for(int i=0;i<4;i++)
        v[i] =  v1[i];
}

Tara::Tara(const Tara& obj){
    v = NULL;
    *this = obj;
}

Tara& Tara::operator=(const Tara& obj){
    if(v!=NULL) delete[]v;
    v = new Localitate*[4];
    for(int i=0;i<4;i++) v[i] = obj.v[i];
    return *this;
}

void Tara::afisare(){
    for(int i=0;i<4;i++){v[i]->afisare();
	cout << endl;
    }
}

int Tara::Locuitori(){
    int suma = 0;
    for(int i=0;i<4;i++)
        suma = v[i]->getLocuitori() + suma;

    return suma;
}

int Tara::getVenit_mediu(){
    int suma = 0;
    for(int i=0;i<4;i++)
        suma = suma + v[i]->getVenit_mediu();
    return suma;
}

Tara::~Tara(){
    delete[]v;
}
