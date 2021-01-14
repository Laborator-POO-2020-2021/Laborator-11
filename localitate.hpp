#ifndef LOCALITATE_H
#define LOCALITATE_H
#include <iostream>
#include <cstring>
using namespace std;
class Localitate 
{
            char *nume;
            int nr_locuitori;
            int venit_mediu;
        public:
            Localitate ();
            Localitate (const char*, const int, const int);
            Localitate& operator = (Localitate &obj);
            friend ostream& operator << (ostream &out, Localitate obj);
            virtual double Get_Population ();
            virtual double Get_Venit ();
            ~Localitate ();
};

#endif