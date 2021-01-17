#include "oras.hpp"

Oras::Oras():Localitate(),bonus_venit(0)
{
	bonus_venit=0;
}
Oras::Oras(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit):Localitate(nume,nr_locuitori,venit_mediu),bonus_venit(bonus_venit)
{
}
Oras& Oras::operator=(const Oras& obj)
{
	Localitate::operator=(obj);
	return *this;
}

int Oras::getBonusVenit()
{
	return bonus_venit;
}
int Oras::getVenit()
{
	return bonus_venit+getVenitMediu();
}
void Oras::afisare()
{
	cout<<"Nume: "<<getNume()<<endl;
	cout<<"Nr locuitori: "<<getNRlocuitori()<<endl;
	/*cout<<"Venit mediu: "<<getVenitMediu()<<endl;
	cout<<"Bonus venit: "<<bonus_venit<<endl;*/
	cout<<"Venit final: "<<getVenitMediu()+bonus_venit<<endl;
}
