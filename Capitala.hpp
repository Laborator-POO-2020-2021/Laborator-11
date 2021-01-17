#ifndef CAPITALA_HPP
#define CAPITALA_hPP

#include "Oras.hpp"

class Capitala: public Oras {
    char *tara;
public:
    Capitala();
    Capitala(const char*, int, const char*, int, int);
    ~Capitala();
    char* getTara();
    void Write();
};

#endif