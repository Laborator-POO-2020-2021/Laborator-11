#include "Capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL) {
	
}


Capitala::Capitala(const char* tara,int bonus_venit,const char* nume,int nr_locuitori,int venit_mediu):Oras(bonus_venit,nume,nr_locuitori,venit_mediu) {
	this->tara = new char[strlen(tara)+1];
	strcpy(this->tara,tara);

}


Capitala::Capitala(const Capitala& obj) {
//	if(this->tara != NULL)
  //      delete  []this->tara;
	this->tara = new char[strlen(obj.tara) + 1];
	strcpy(this->tara,obj.tara);
	
}



Capitala::~Capitala() {
	delete []tara;
}
Capitala& Capitala::operator=(const Capitala& obj) {
	Oras::operator=(obj);
	if(this->tara != NULL)
		delete []this->tara;
	this->tara = new char[strlen(obj.tara)+1];
	strcpy(this->tara,obj.tara);
	


}

void Capitala::afisare()
{
    Oras::afisare();
    
    cout << "Tara: ";
    if(this->tara != NULL)
        cout << this->tara << endl;
    else
        cout << "NULL" << endl;
        
}
int Capitala::getLoc()

{
	return this->nr_locuitori;
}

int Capitala::getVenit()

{
	return this->venit_mediu+bonus_venit;
}
