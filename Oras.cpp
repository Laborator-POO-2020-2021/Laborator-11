#include "Oras.hpp"

Oras::Oras():Localitate(){
	bonus_venit = 0;
}
Oras::Oras(int bonus_venit, const char* nume, int nr_locuitori, int venit_mediu):Localitate(nume,nr_locuitori,venit_mediu){
	this->bonus_venit = bonus_venit;
		
}
Oras::~Oras(){
}
Oras::getBonus(){
	return bonus_venit;
}
Oras::getVenit(){
	return getVenit1()+bonus_venit;
}
void Oras::afisare(){
	cout<<"Nume: "<<getNume()<<endl<<"Nr Locuitori: "<<getNrLoc()<<endl<<"Venit Mediu: "<<Localitate::getVenit1()+bonus_venit<<endl<<endl;
}

