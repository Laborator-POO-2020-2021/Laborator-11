#include "Localitate.hpp"

Localitate::Localitate() {
	nume=NULL;
	nr_locuitori=0;
	venit_mediu=0;
}

Localitate::Localitate(const char* nume,int nr_locuitori,int venit_mediu ) {

	this->nume = new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	this->nr_locuitori=nr_locuitori;
	this->venit_mediu=venit_mediu;

}

Localitate::Localitate(const Localitate& obj) {
	this-> nr_locuitori=obj.nr_locuitori;
	this-> venit_mediu=obj.venit_mediu;
  //  if(this->nume != NULL)
 //       delete  []this->nume;
    this->nume = new char[strlen(obj.nume)+1];
    strcpy(this->nume, obj.nume);
}



Localitate::~Localitate() {
	delete []nume;
}

Localitate& Localitate::operator=(const Localitate& obj) {
		

	if (nume != NULL)
		delete []nume;
	this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume,obj.nume);

    this->nr_locuitori = obj.nr_locuitori;
    this->venit_mediu = obj.venit_mediu;
	return *this;
}
void Localitate::afisare()
{
    cout << "Nume: ";
    if(this->nume != NULL)
        cout << this->nume << endl;
    else
        cout << "NULL" << endl;
    cout << "Nr_locuitori: " << this->nr_locuitori << endl;
    cout << "Venit_mediu: " << this->venit_mediu << endl;
   
}

int Localitate::getLoc()

{
	return this->nr_locuitori;
}

int Localitate::getVenit()
{
	
	return venit_mediu;
}
