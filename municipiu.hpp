#include "oras.hpp"
class Municipiu : public Oras {
    char *regiune;

public:
    Municipiu(const char*, int, const char *, int, int);
    Municipiu();
    void afisare();
    char* getRegiune();

};
