#include "oras.hpp"

Oras::Oras(void):Localitate(),bonus_venit(0){}

Oras::Oras(const char *name, int locuitori, int venit, int bonus):Localitate(name, locuitori, venit),bonus_venit(bonus){}

Oras& Oras::operator = (const Oras &obj){
    Localitate::operator=(obj);
    bonus_venit = obj.bonus_venit;

    return *this;
}

ostream& operator << (ostream &out, Oras &obj){
    out << (Localitate&)obj;
    out << "Bonus: " << obj.bonus_venit << endl;

    return out;
}

int Oras::getVenit(void){
    return Localitate::getVenit() + bonus_venit;
}

int Oras::getLocuitori(void){
    return Localitate::getLocuitori();
}



