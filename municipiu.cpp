#include "municipiu.hpp"

Municipiu::Municipiu()
{
    regiune=NULL;
}

Municipiu::Municipiu(char n[50], int nr, int venit, int bonus, char r[50]):Oras(n,nr,venit,bonus)
{
    regiune=new char[strlen(r)+1];
    strcpy(regiune,r);
}

char* Municipiu::getReg() const
{
    return regiune;
}

ostream& operator<<(ostream& out, Municipiu &m)
{
    out<<"Nume: "<<m.getNume()<<endl;
    out<<"Nr Locuitori: "<<m.getNr()<<endl;
    out<<"Venit Mediu: "<<m.getVenit()<<endl;
    out<<"Venit Bonus: "<<m.getBonus()<<endl;
    out<<"Regiune: "<<m.getReg()<<endl;
    return out;
}

void Municipiu::afisare()
{
    cout<<"Nume: "<<getNume()<<endl;
    cout<<"Nr Locuitori: "<<getNr()<<endl;
    cout<<"Venit Mediu: "<<getVenit()<<endl;
    cout<<"Venit Bonus: "<<getBonus()<<endl;
    cout<<"Regiune: "<<getReg()<<endl;
}

Municipiu::Municipiu(Municipiu &l)
{
    setNume(l.getNume());
    setNrLoc(l.getNr());
    setVenit(l.getVenit());
    setBonus(l.getBonus());
    if (regiune)
        delete []regiune;
    regiune=new char[strlen(l.getReg())+1];
    strcpy(regiune,l.getReg());
}

Municipiu & Municipiu::operator=(const Municipiu &obj)
{
    setNume(obj.getNume());
    setNrLoc(obj.getNr());
    setVenit(obj.getVenit());
    setBonus(obj.getBonus());
    if (regiune)
        delete []regiune;
    regiune=new char[strlen(obj.getReg())+1];
    strcpy(regiune,obj.getReg());
    return *this;
}

Municipiu::~Municipiu()
{
    delete []regiune;
}
