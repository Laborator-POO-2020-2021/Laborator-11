#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "oras.hpp"

class Capitala: public Oras{
    char* tara;
public:
    Capitala(void);
    Capitala(const char*, int, int, int, const char*);
    
    Capitala &operator=(const Capitala &);
    friend ostream& operator << (ostream &out, Capitala &);
    
    int getVenit();
    int getLocuitori();

    ~Capitala();
};

#endif