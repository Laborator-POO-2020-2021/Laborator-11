#include "municipiu.hpp"

Municipiu::Municipiu() {};

Municipiu::Municipiu(const char* regiune)
{
  this->regiune = new char[strlen(regiune)+1];
  strcpy(this->regiune,regiune);
}

Municipiu::Municipiu(const char* regiune, int bonus_venit, const char* nume, int nr_locuitori,int venit_mediu):Oras(bonus_venit,nume,nr_locuitori,venit_mediu)
{
  this->regiune = new char[strlen(regiune)+1];
  strcpy(this->regiune,regiune);
}

Municipiu::~Municipiu()
{
  if(this->regiune!=NULL)
    delete []this->regiune;
}

void Municipiu:: afis()
{
  cout << "Regiune: " << this->regiune << endl;
}
