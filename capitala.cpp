#include "capitala.hpp"
#include "oras.hpp"

Capitala::Capitala():Oras(),tara(NULL)
{
}
Capitala::Capitala(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *tara):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
	this->tara=new char[strlen(tara)+1];
	strcpy(this->tara,tara);
}
Capitala::Capitala(const Capitala& obj)
{
	tara=NULL;
	*this=obj;
}
Capitala& Capitala::operator=(const Capitala& obj)
{
	Oras::operator=(obj);
	if(tara!=NULL) delete []tara;
	this->tara=new char[strlen(obj.tara)+1];
	strcpy(this->tara,obj.tara);
	return *this;
}
Capitala::~Capitala()
{
	delete []tara;
}
char* Capitala::getTara()
{
	return tara;
}
void Capitala::afisare()
{
	cout<<"Nume: "<<getNume()<<endl;
	cout<<"Nr locuitori: "<<getNRlocuitori()<<endl;
	cout<<"Venit final: "<<getVenitMediu()+getBonusVenit()<<endl;
	cout<<"Tara: "<<tara<<endl;
}
/*ostream& operator<<(ostream &out, const Capitala& obj)
{
	out<<(Oras&)obj;
    if (obj.tara != NULL) out<<"Tara: "<<obj.tara;
    else out <<"NULL ";
    out<<endl;
    return out;
}*/
