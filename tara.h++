#ifndef __TARA_H
#define __TARA_H

#include "localitate.h++"

class Tara {

private:
    Localitate **v; ///#hint:pentru a parcurge vectorul puneti pe ultima pozitie NULL si parcurgeti vectorul pana dati de NULL.

public:
    Tara();
    Tara(Localitate**);
    ~Tara();

    Tara &operator=(const Tara&);
    friend std::ostream& operator<<(std::ostream&, Tara&);
    int localitateSize(Localitate **);
};

#endif