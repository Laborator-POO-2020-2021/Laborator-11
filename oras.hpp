#ifndef ORAS_H
#define ORAS_H
#include "localitate.hpp"

class Oras: public Localitate
{
                int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
        public:
                Oras ();
                Oras (const char *, const int, const int, const int);
                Oras& operator = (Oras &obj);
                friend ostream& operator << (ostream &out, Oras &obj);
                double Get_Population();
                double Get_Venit ();
};

#endif