#include "oras.hpp"

Oras::Oras():Localitate(), bonus_venit(0){}

Oras::Oras(int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu):bonus_venit(bonus_venit), Localitate(nume, nr_locuitori, venit_mediu){}

Oras&  Oras::operator=(const Oras& obj)
{
	Localitate::operator = (obj);
	this->bonus_venit = obj.bonus_venit;
	
	return *this;
}

int Oras::getBonusVenit()
{
	return Localitate::getVenitMediu() + bonus_venit;
}

void Oras::afisare()
{
//	cout << "Nume: " << Localitate::getNume() << endl;
//	cout << "Numar de locuitori: " << Localitate::getNrLocuitori() << endl;
//	cout << "Venit mediu: " << Localitate::getVenitMediu() << endl;

	Localitate::afisare();
	cout << "Bonus venit: " << Oras::getBonusVenit() << endl;
	
}




