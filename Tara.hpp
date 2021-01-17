#ifndef LAB11_TARA_HPP
#define LAB11_TARA_HPP

#include <iostream>
#include <string.h>

using namespace std;

class Tara {
public:

    virtual void afisare()=0;

    virtual int getNrLocuitori() const=0;

    virtual int getVenitMediu() const=0;

    virtual ~Tara()=0;

};


#endif //LAB11_TARA_HPP
