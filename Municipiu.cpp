#include "Municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL) {
	
	
}


Municipiu::Municipiu(const char* regiune,int bonus_venit,const char* nume,int nr_locuitori,int venit_mediu):Oras(bonus_venit,nume,nr_locuitori,venit_mediu) {
	this->regiune = new char[strlen(regiune)+1];
	strcpy(this->regiune,regiune);

}


Municipiu::Municipiu(const Municipiu& obj) {
//	 if(this->regiune != NULL)
//        delete  []this->regiune;
	this->regiune = new char[strlen(obj.regiune) + 1];
	strcpy(this->regiune,obj.regiune);
	
}



Municipiu::~Municipiu() {
	delete []regiune;
}

Municipiu& Municipiu::operator=(const Municipiu& obj) {
	Oras::operator=(obj);
	if(this->regiune != NULL)
		delete []this->regiune;
	this->nume = new char[strlen(obj.regiune)+1];
	strcpy(this->regiune,obj.regiune);
	


}

void Municipiu::afisare()
{
    Oras::afisare();
    cout << "Regiunea: ";
    if(this->regiune != NULL)
        cout << this->regiune << endl;
    else
        cout << "NULL" << endl;
}

int Municipiu::getLoc()

{
	return this->nr_locuitori;
}

int Municipiu::getVenit()

{
	return this->venit_mediu+bonus_venit;
}
