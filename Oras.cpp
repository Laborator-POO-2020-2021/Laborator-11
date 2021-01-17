#include "Oras.hpp"


Oras::Oras():bonus_venit(0), Localitate()
{

}

Oras::Oras(char* nume, int loc, int venit, int bonus):bonus_venit(bonus), Localitate(nume,loc,venit)
{

}

Oras::~Oras()
{

}
