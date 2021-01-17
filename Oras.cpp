#include "Oras.hpp"

Oras::Oras():Localitate() {
	bonus_venit=0;
}

Oras::Oras(int bonus_venit,const char* nume,int nr_locuitori,int venit_mediu):Localitate(nume, nr_locuitori, venit_mediu ) {

	this->bonus_venit=bonus_venit;

}

Oras::Oras(const Oras& obj) {
	
	this->bonus_venit=obj.bonus_venit;
}



Oras::~Oras() {
	
}


Oras& Oras::operator=(const Oras& obj){
	Localitate::operator=(obj);
	this->bonus_venit = obj.bonus_venit;

	return *this;
}

void Oras::afisare()
{
    Localitate::afisare();
    cout << "Venit_bonus: " << this->bonus_venit << endl;
    
}


int Oras::getLoc()

{
	return this->nr_locuitori;
}

int Oras::getVenit()

{
	return this->venit_mediu+bonus_venit;
}
