#include "functions.hpp"
void sortare_populatie(Tara **vec, int n){
    
    Tara *aux;
    for(int i = 0 ; i < n - 1; i ++)
        for(int j = i+1 ; j < n ; j++)
            if(vec[i]->getNumarLocuitoriTara() < vec[j]->getNumarLocuitoriTara())
                {
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }

}

void sortare_venit(Tara **vec, int n){
    
    Tara *aux;
    for(int i = 0 ; i < n - 1; i ++)
        for(int j = i+1 ; j < n ; j++)
            if(vec[i]->getVenitMediuTara() < vec[j]->getVenitMediuTara() )
                {
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }

}