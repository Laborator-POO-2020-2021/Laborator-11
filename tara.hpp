#ifndef TARA_HPP
#define TARA_HPP

#include "libraries.hpp"
#include "oras.hpp"

class Tara{
protected:
        Localitate **v; 
public:
        Tara();
        ~Tara();
        Tara(Localitate **);

        void afisare(ostream &);
        friend ostream &operator<<(ostream&, Tara&);
        
        int Venit();
        int Locuitori();
};

#endif