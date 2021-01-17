#include "municipiu.h++"

Municipiu::Municipiu() : Oras() {
    regiune = NULL;
}

Municipiu::Municipiu(const char *regiune, Oras& oras) {
    Oras::operator=(oras);
    this->regiune = new char [strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu() {
    delete []regiune;
}

Municipiu& Municipiu::operator=(const Municipiu& municipiu) {
    Oras::operator=(municipiu);

    if (this->regiune != NULL)
        delete []regiune;
    
    this->regiune = new char [strlen(municipiu.regiune) + 1];
    strcpy(this->regiune, municipiu.regiune);

    return *this;
}

std::ostream& operator<<(std::ostream& out, Municipiu& municipiu) {
    out << (Oras&)municipiu;
    out << "Regiunea : " << municipiu.regiune << '\n';

    return out;
}
