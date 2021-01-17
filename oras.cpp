#include "oras.hpp"

Oras::Oras():bonus_venit(0), Localitate()
{
}

Oras::Oras(int bonus_ven, const char*num, int nr_loc, int venit_med) : bonus_venit(bonus_ven), Localitate(num, nr_loc, venit_med + bonus_ven)
{
}

Oras::Oras(const Oras&obj)
{
	Localitate::nume = NULL;
	*this = obj;
}

Oras& Oras::operator=(const Oras&obj)
{
	bonus_venit = obj.bonus_venit;
	Localitate::operator=(obj);
	return *this;
}

void Oras::afisare()
{
	cout << "Venitul bonus: " << bonus_venit << endl;
	Localitate::afisare();
}

Oras::~Oras()
{
}
