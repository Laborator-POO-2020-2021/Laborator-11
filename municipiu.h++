#ifndef __MUNICIPIU_H
#define __MUNICIPIU_H

#include "oras.h++"

class Municipiu : public Oras{

protected:
    char* regiune;

public:
    Municipiu();
    Municipiu(const char*, Oras&);
    ~Municipiu();

    Municipiu &operator=(const Municipiu&);
    friend std::ostream& operator<<(std::ostream&, Municipiu&);
};


#endif