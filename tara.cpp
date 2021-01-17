#include "tara.h++"

Tara::Tara() {
    v = NULL;
}

int Tara::localitateSize(Localitate** localitate) {
    int localitate_size = 0;
    for (Localitate *i = localitate[ 0 ]; i != NULL; i = localitate[ localitate_size ]) {
        ++localitate_size;
    }

    return localitate_size;
}

Tara::Tara(Localitate** localitate) {
    int localitate_size = localitateSize(localitate);

    v = new Localitate*[ localitate_size + 1 ];

    for (int i = 0; i < localitate_size; ++i) {
        v[ i ] = localitate[ i ];
    }

    v[ localitate_size ] = NULL;
}

Tara::~Tara() {
    delete []v;
}


Tara& Tara::operator=(const Tara &tara) {
    if (this->v != NULL)
        delete []v;

    int size = localitateSize(tara.v);

    v = new Localitate* [size];

    for (int i = 0; i < size; ++i) {
        this->v[ i ] = tara.v[ i ];
    }

    return *this;
}