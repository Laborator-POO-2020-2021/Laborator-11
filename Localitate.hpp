//
// Created by Bogdan on 15.01.2021.
//

#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP
#include<iostream>
#include<cstring>
using namespace std;
class Localitate {
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*,int,int);
    Localitate(const Localitate&);
    Localitate& operator=(const Localitate&);
    virtual void afisare() ;
    virtual ~Localitate() ;
    virtual int getLocuitori();
    virtual int getVenit_mediu();
};
#endif //LOCALITATE_HPP
