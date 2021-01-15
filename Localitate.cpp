#include"Localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0)
{
}
Localitate::Localitate(const char* nume,int nr_locuitori,int venit_mediu) :nr_locuitori(nr_locuitori),venit_mediu(venit_mediu)
{
	this->nume = new char[strlen(nume) +1];
	strcpy(this->nume,nume);
}
Localitate::~Localitate()
{
	delete []nume;
}
int Localitate::getLocuitori()
{
	return nr_locuitori;
   
}
int Localitate::getVenitMediu()
{
	return venit_mediu;
   
}
void Localitate::afisare()
{
	cout<<"Nume : "<<nume<<endl;
	cout<<"Numar de locuitori : "<<nr_locuitori<<endl;
	cout<<"Venit mediu :"<<venit_mediu<<endl;
	

}
Localitate & Localitate::operator=(const Localitate& obj)
{
	this->nr_locuitori = obj.nr_locuitori;
	this->venit_mediu = obj.venit_mediu;
	if(nume != NULL)
	{
		delete []nume;
	}
	this->nume = new char[strlen(obj.nume) +1];
	strcpy(this->nume,obj.nume);
	
	return *this;
}

