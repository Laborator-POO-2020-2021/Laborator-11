#ifndef __LOCALITATE_H
#define __LOCALITATE_H

#include <iostream>
#include <cstring>

class Localitate {

protected:
    char* nume;
    int nr_locuitori;
    int venit_mediu;

public:
    Localitate();
    Localitate(const char*, const int, const int);
    ~Localitate();

    Localitate &operator=(const Localitate&);
    friend std::ostream& operator<<(std::ostream&, Localitate&);
};


#endif