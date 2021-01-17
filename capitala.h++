#ifndef __CAPITALA_H
#define __CAPITALA_H

#include "oras.h++"

class Capitala : public Oras{

private:
    char* tara;

public:
    Capitala();
    Capitala(const char*, const Oras&);
    ~Capitala();

    Capitala &operator=(const Capitala&);
    friend std::ostream& operator<<(std::ostream&, Capitala&);
};


#endif