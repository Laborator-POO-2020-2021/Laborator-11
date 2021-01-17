#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Localitate
{
    char *nume;
    int nr_locuitori;
    int venit_mediu;
public:
    Localitate();
    Localitate(char *,int, int);
    virtual int getNr() const;
    virtual int getVenit() const;
    virtual char* getNume() const;
    friend ostream& operator<<(ostream& out, Localitate&);
    Localitate & operator=(const Localitate &);
    virtual void afisare();
    Localitate(Localitate&);
    virtual void setNume(char *);
    virtual void setNrLoc(int);
    virtual void setVenit(int);
    virtual ~Localitate();
};

#endif // LOCALITATE_HPP
