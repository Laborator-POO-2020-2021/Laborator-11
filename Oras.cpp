#include "Oras.hpp"

Oras::Oras():Localitate()
{
	this->bonus_venit=0;
}

Oras::Oras(const char* nume,const int nr_loc, const int venit_med, const int bonus):Localitate(nume,nr_loc,venit_med)
{
	this->bonus_venit=bonus;
}

Oras::~Oras()
{
	
}

void Oras::afisare()
{
	Localitate::afisare();
	cout<<"Bonus venit: "<<this->bonus_venit<<endl;
}

Oras& Oras::operator=(const Oras& obj)
{
	Localitate::operator=(obj);
	this->bonus_venit=obj.bonus_venit;
	
	return *this;
}

int Oras::getVenit()
{
	return this->bonus_venit+Localitate::getVenit();
}

ostream& operator<<(ostream& out, const Oras& obj)
{
	out<<(Localitate&)obj;
	out<<"Bonus venit: "<<obj.bonus_venit<<endl;
	
	return out;
}
