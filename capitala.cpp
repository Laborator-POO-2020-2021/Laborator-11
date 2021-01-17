#include "capitala.hpp"

Capitala::Capitala():Oras(),tara(NULL){}

Capitala::Capitala(const char* name, int locuitori, int venit, int bonus, const char* nation):Oras(name, locuitori, venit, bonus){
    tara = new char[strlen(nation)+1];
    strcpy(tara, nation);
}

Capitala &Capitala::operator=(const Capitala &obj){
    Oras::operator=(obj);
    if (tara != NULL)
        delete[] tara;
    tara = new char[strlen(obj.tara) + 1];
    strcpy(tara, obj.tara);
    
    return *this;
}

ostream& operator << (ostream &out, Capitala &obj){
    out << (Oras&)obj;
    out << "Tara: " << obj.tara << endl;

    return out;
}

int Capitala::getVenit(){
    return Oras::getVenit();
}

int Capitala::getLocuitori(void){
    return Oras::getLocuitori();
}

Capitala::~Capitala(){
    delete []tara;
}