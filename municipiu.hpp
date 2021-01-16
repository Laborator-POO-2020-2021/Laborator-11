#ifndef MUNICIPIU_H
#define MUNICIPIU_H
#include "oras.hpp"

class Municipiu: public Oras
{
            char * regiune;
        public:
            Municipiu ();
            Municipiu (const char *, const int, const int, const int, const char*);
            Municipiu& operator = (Municipiu &obj);
            void print();
            double Get_Venit ();
            double Get_population ();
            ~Municipiu ();

};

#endif
