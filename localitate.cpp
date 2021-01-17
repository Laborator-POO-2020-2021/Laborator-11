#include "localitate.hpp"

Localitate::Localitate():nume(NULL),nr_locuitori(0),venit_mediu(0)
{
}
Localitate::Localitate(const char* nume, int nr_locuitori, int venit_mediu):nr_locuitori(nr_locuitori),venit_mediu(venit_mediu)
{
//	this->nr_locuitori=nr_locuitori;
//	this->venit_mediu=venit_mediu;
	this->nume=new char[strlen(nume)+1];
	strcpy(this->nume,nume);
	
}
Localitate::Localitate(const Localitate& obj)
{
	nume=NULL;
	*this=obj;
}
Localitate& Localitate::operator=(const Localitate& obj)
{
	this->nr_locuitori=obj.nr_locuitori;
	this->venit_mediu=obj.venit_mediu;
	this->nume=new char[strlen(obj.nume)+1];
	strcpy(this->nume,obj.nume);
	return *this;
}
Localitate::~Localitate()
{
	delete []nume;
}
void Localitate::afisare()
{
	cout<<"Nume: "<<nume<<endl;
	cout<<"Nr locuitori: "<<nr_locuitori<<endl;
	cout<<"Venit mediu: "<<venit_mediu<<endl;
}
/*ostream& operator<<(ostream& out, const Clasa& obj)
{
	if (obj.nume != NULL) out<<"Nume: "<<obj.nume<<endl;
    else out <<"NULL ";
    out<<"Nr locuitori: "<<obj.nr_locuitori<<endl;
    out<<"Venit mediu: "<<obj.venit_mediu<<endl;
	return out;
}*/
char* Localitate::getNume()
{
	return nume;
}
int Localitate::getNRlocuitori()
{
	return nr_locuitori;
}
int Localitate::getVenitMediu()
{
	return venit_mediu;
}
