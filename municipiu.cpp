#include "municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL)
{
}
Municipiu::Municipiu(const char* nume, int nr_locuitori, int venit_mediu, int bonus_venit, const char *regiune):Oras(nume,nr_locuitori,venit_mediu,bonus_venit)
{
	this->regiune=new char[strlen(regiune)+1];
	strcpy(this->regiune,regiune);
}
Municipiu::Municipiu(const Municipiu& obj)
{
	regiune=NULL;
	*this=obj;
}
Municipiu& Municipiu::operator=(const Municipiu& obj)
{
	Oras::operator=(obj);
	if(regiune!=NULL) delete []regiune;
	this->regiune=new char[strlen(obj.regiune)+1];
	strcpy(this->regiune,obj.regiune);
	return *this;
}
Municipiu::~Municipiu()
{
	delete []regiune;
}
char* Municipiu::getRegiune()
{
	return regiune;
}
void Municipiu::afisare()
{
	cout<<"Nume: "<<getNume()<<endl;
	cout<<"Nr locuitori: "<<getNRlocuitori()<<endl;
	cout<<"Venit final: "<<getVenitMediu()+getBonusVenit()<<endl;
	cout<<"Regiune: "<<regiune<<endl;
}
/*ostream& operator<<(ostream &out, const Municipiu& obj)
{
	out<<(Oras&)obj;
    if (obj.regiune != NULL) out<<"Regiune: "<<obj.regiune;
    else out <<"NULL ";
    out<<endl;
    return out;
}*/
