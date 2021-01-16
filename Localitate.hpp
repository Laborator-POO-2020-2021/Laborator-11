#ifndef LAB11_LOCALITATE_HPP
#define LAB11_LOCALITATE_HPP

#include <iostream>
#include <cstring>

using namespace std;

class Localitate{
protected:
    char* nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(char*, int, int);
    Localitate(const Localitate&);
    Localitate& operator=(const Localitate&);
    int getNrLoc();
    int getVenit();
    char* getNume();

    ~Localitate();
};


#endif //LAB11_LOCALITATE_HPP
