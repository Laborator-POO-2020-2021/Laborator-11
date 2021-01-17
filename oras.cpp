#include "oras.hpp"

Oras::Oras(){};
Oras::Oras(int bonus_venit):bonus_venit(bonus_venit){};
Oras::Oras(int bonus_venit,const char *nume, int nr_locuitori, int venit_mediu):bonus_venit(bonus_venit),Localitate(nume,nr_locuitori,venit_mediu){};

Oras::~Oras(){};

void Oras::afis()
{
  cout << "Bonus venit: " << bonus_venit << endl;
  Localitate::afis();
}
