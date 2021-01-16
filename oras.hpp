#pragma once
#include "localitate.hpp"

class Oras : public Localitate
{
protected:
        int bonus_venit; //venitul unui oras este venitul localitatii + bonus_venit.
public:
        Oras();
        Oras(const char *, int, int, int);
        ~Oras();
        Oras(const Oras &);
        Oras &operator=(const Oras &);
        friend ostream &operator<<(ostream &, const Oras &);

        void print(){cout<<*this;}
        virtual Oras* clone() const { return new Oras(*this); }
         int getVenit() {return venit_mediu + bonus_venit;}
};