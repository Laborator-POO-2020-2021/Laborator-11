#include "localitate.hpp"

Localitate::Localitate(): nume(NULL), nr_locuitori(0), venit_mediu(0) {}

Localitate::Localitate(const char* name, int nrLoc, int venit): nr_locuitori(nrLoc), venit_mediu(venit)
{
    this->nume = new char[strlen(name) + 1];
    strcpy(this->nume, name);
}


Localitate::Localitate(const Localitate& obj)       
{
    this->nume = NULL;
    *this = obj;
}

Localitate::~Localitate()
{
    delete[] nume;
}

Localitate& Localitate::operator=(const Localitate& obj)
{
    if(nume != NULL)
        delete[] nume;
    this->nume = new char[strlen(obj.nume) + 1];
    strcpy(this->nume, obj.nume);
    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;

    return *this;
}

int Localitate::getLocuitori() const
{
    return this->nr_locuitori;
}

ostream& operator<<(ostream& out, const Localitate& obj)
{
    out << "Numele localitatii este: " << obj.nume << endl;
    out << "Localitatea are " << obj.nr_locuitori <<" locuitori" <<endl;
    out << "Venitul mediu al localitatii este: " << obj.venit_mediu << endl;

    return out;
}




