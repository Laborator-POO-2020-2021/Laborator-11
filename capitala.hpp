#include "oras.hpp"
class Capitala : public Oras{
        char *tara;

public:
    Capitala();
    Capitala(const char*, int, const char *, int, int);
    void afisare();
    char* getTara();

    
};
