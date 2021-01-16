#ifndef LOCALITATE_H
#define LOCALITATE_H

#include <iostream>
#include <cstring>

using namespace std;

class Localitate 
{
protected:
    char* nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(const char*, int, int);
    Localitate(const Localitate&);
    Localitate& operator =(const Localitate&);
    virtual int locuitori();
    virtual int venit();
    virtual void afisare() ;
    virtual ~Localitate();
    

};


#endif