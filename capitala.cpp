#include "capitala.hpp"

Capitala::Capitala(){};

Capitala::Capitala(const char* tara, int bonus_venit, const char* nume, int nr_locuitori,int venit_mediu)
:Oras(bonus_venit,nume,nr_locuitori,venit_mediu)
{
  this->tara = new char[strlen(tara)+1];
  strcpy(this->tara,tara);
}

Capitala::~Capitala()
{
  if(this->tara!=NULL)
    delete []this->tara;
}

void Capitala:: afis()
{
  cout << "Tara: " << this->tara << endl;
}
