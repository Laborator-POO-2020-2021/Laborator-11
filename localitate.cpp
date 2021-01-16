#include "localitate.hpp"

Localitate::Localitate(){};

Localitate::Localitate(const char *nume, int nr_locuitori, int venit_mediu):nr_locuitori(nr_locuitori),venit_mediu(venit_mediu)
{
  this->nume = new char[strlen(nume)+1];
  strcpy(this->nume,nume);
}

Localitate::~Localitate()
{
  if(this->nume!=NULL)
    delete []this->nume;
}

int Localitate::getNrLocuitori()
{
  return this->nr_locuitori;
}

int Localitate::getVenitMediu()
{
  return this->venit_mediu;
}

char* Localitate::getNume()
{
  return this->nume;
}

void Localitate::afis()
{
  cout << "Nume localitate: " << this->nume << endl;
  cout << "Nr locuitori: " << this->nr_locuitori << endl;
  cout << "Venit mediu: " << this->venit_mediu << endl;

}
