#include "localitate.h++"

Localitate::Localitate() {
    this->nume = NULL;
    this->nr_locuitori = 0;
    this->venit_mediu = 0;
}

Localitate::Localitate(const char *nume, const int nr_locuitori, const int venit_mediu) {
    this->nume = new char [strlen(nume) + 1 ];
    strcpy(this->nume, nume);

    this->nr_locuitori = nr_locuitori;
    this->venit_mediu = venit_mediu;
}

Localitate::~Localitate() {
    delete []nume;
}

Localitate& Localitate::operator=(const Localitate& localitate) {
    if (this->nume != NULL)
        delete []this->nume;
    
    this->nume = new char [strlen(localitate.nume) + 1];
    strcpy(this->nume, localitate.nume);

    this->nr_locuitori = localitate.nr_locuitori;
    this->venit_mediu = localitate.venit_mediu;

    return *this;
}

std::ostream& operator<<(std::ostream& out, Localitate& localitate) {
    out << "Numele localitatii: " << localitate.nume << '\n';
    out << "Numarul de locuitori: " << localitate.nr_locuitori << '\n';
    out << "Venitul mediu: " << localitate.venit_mediu << '\n';

    return out;
}