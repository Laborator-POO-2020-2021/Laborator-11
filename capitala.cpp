#include "capitala.h++"

Capitala::Capitala() : Oras(){
    tara = NULL;
}

Capitala::Capitala(const char *tara, const Oras& oras) {
    Oras::operator=(oras);
    this->tara = new char [strlen(tara) + 1];
    strcpy(this->tara, tara);
}

Capitala::~Capitala() {
    delete []tara;
}

Capitala& Capitala::operator=(const Capitala& capitala) {
    Oras::operator=(capitala);
    
    if (this->tara != NULL)
        delete []tara;

    this->tara = new char [strlen(capitala.tara) + 1];
    strcpy(this->tara, capitala.tara);

    return *this;
}


std::ostream& operator<<(std::ostream& out, Capitala& capitala) {
    out << (Oras&)capitala;
    out << "Tara : " << capitala.tara << '\n';

    return out;
}