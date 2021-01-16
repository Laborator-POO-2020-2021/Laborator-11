#include "oras.h"


Oras::Oras() :bonus_venit(0), Localitate()
{

}
Oras::Oras(int bonus,const char* num,int a, int b) : bonus_venit(bonus), Localitate(num,a,b+bonus)
{

}
Oras::Oras(const Oras&obj)
{
	Localitate::nume = NULL;
	*this = obj;
}
Oras& Oras::operator =(const Oras&obj)
{

	bonus_venit = obj.bonus_venit;
	Localitate::operator=(obj);

	return *this;
}
Oras::~Oras()
{
}
void Oras::afisare()
{
	cout << "venit bonus: " << bonus_venit<<" ";
	Localitate::afisare();
	
}