#include "municipiu.h++"

Municipiu::Municipiu() {
    regiune = NULL;
}

Municipiu::Municipiu(char *regiune) {
    this->regiune = new char [strlen(regiune) + 1];
    strcpy(this->regiune, regiune);
}

Municipiu::~Municipiu() {
    delete []regiune;
}