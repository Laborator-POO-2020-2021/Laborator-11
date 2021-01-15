//Antohi Sorin 324AB

#include "oras.h"

Oras::Oras():Localitate(),bonus_venit(0)
{
	
}

Oras::Oras(char *num, int locuitori, int venit, int bonus):Localitate(num,locuitori,venit+bonus)
{
	bonus_venit=bonus;
}

Oras::~Oras()
{
	
}

ostream& operator<<(ostream& out, const Oras& oras)
{
	out<<(Localitate&)oras;
	out << "Acest oras are un bonus de " << oras.bonus_venit << " RON.";
	return out;
}

Oras& Oras::operator=(const Oras oras)
{
	Localitate::operator=(oras);
	this->bonus_venit=oras.bonus_venit;
	return *this;
}
void Oras::afisare()
{
	Localitate::afisare();
	cout << "Acest oras are un bonus de " << this->bonus_venit << " RON.";
}
