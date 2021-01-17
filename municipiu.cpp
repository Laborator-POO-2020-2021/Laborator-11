#include"municipiu.hpp"

Municipiu::Municipiu():Oras(),regiune(NULL){}

Municipiu::Municipiu(const char* name, int loc, int venit, int bonus, const char* regi):Oras(name, loc, venit, bonus){
    regiune = new char[strlen(regi)+1];
    strcpy(regiune, regi);
}

Municipiu &Municipiu::operator=(const Municipiu &obj){
    Oras::operator=(obj);
    if (regiune != NULL)
        delete[] regiune;
    regiune = new char[strlen(obj.regiune) + 1];
    strcpy(regiune, obj.regiune);
    
    return *this;
}

ostream& operator << (ostream &out, Municipiu &obj){
    out << (Oras&)obj;
    out << "Regiune: " << obj.regiune << endl;

    return out;
}

int Municipiu::getVenit(){
    return Oras::getVenit();
}

int Municipiu::getLocuitori(void){
    return Oras::getLocuitori();
}

Municipiu::~Municipiu(){
    delete []regiune;
}