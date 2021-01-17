#include "Tara.h"

Tara :: Tara() : v(NULL){

}

Tara :: Tara(Localitate** _v){
    int i = 0, dim = 0;
    while(v[i] != NULL){
        dim++;
        i++;
    }
    v = new Localitate*[dim];

    for(i = 0; i < dim; i++){
        v[i] = new Localitate;
        v[i] = _v[i];
    }
}
int Tara :: getLocuitori(){
    int sumLocuitori = 0, i = 0;
    while(v[i] != NULL){
        sumLocuitori += v[i]->getLocuitori();
    }
    return sumLocuitori;
}

int Tara :: getVenit(){
    int sumVenit = 0, i = 0;
    while(v[i] != NULL){
        sumVenit += v[i]->getVenit();
    }
    return sumVenit;
}

void Tara :: afisare(){
    int i = 0;
    while(v[i] != NULL){
        cout << i+1 << ".\n";
        v[i]->afisare();
        cout << endl << "=================================" << endl << endl;
    }
}

Tara :: ~Tara(){
    int i = 0;
    while(v[i] != NULL){
        delete v[i];
    }
    delete []v;
}