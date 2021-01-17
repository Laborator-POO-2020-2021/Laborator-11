#include "capitala.hpp"

Capitala::Capitala()
{
    tara=NULL;
}

Capitala::Capitala(char n[50], int nr, int venit, int bonus, char t[50]):Oras(n,nr,venit,bonus)
{
    tara=new char[strlen(t)+1];
    strcpy(tara,t);
}

char* Capitala::getTara() const
{
    return tara;
}

ostream& operator<<(ostream& out, Capitala &m)
{
    out<<"Nume: "<<m.getNume()<<endl;
    out<<"Nr Locuitori: "<<m.getNr()<<endl;
    out<<"Venit Mediu: "<<m.getVenit()<<endl;
    out<<"Venit Bonus: "<<m.getBonus()<<endl;
    out<<"Tara: "<<m.getTara()<<endl;
    return out;
}

void Capitala::afisare()
{
    cout<<"Nume: "<<getNume()<<endl;
    cout<<"Nr Locuitori: "<<getNr()<<endl;
    cout<<"Venit Mediu: "<<getVenit()<<endl;
    cout<<"Venit Bonus: "<<getBonus()<<endl;
    cout<<"Tara: "<<getTara()<<endl;
}

Capitala::Capitala(Capitala &l)
{
    setNume(l.getNume());
    setNrLoc(l.getNr());
    setVenit(l.getVenit());
    setBonus(l.getBonus());
    if (tara)
        delete []tara;
    tara=new char[strlen(l.getTara())+1];
    strcpy(tara,l.getTara());
}

Capitala & Capitala::operator=(const Capitala &obj)
{
    setNume(obj.getNume());
    setNrLoc(obj.getNr());
    setVenit(obj.getVenit());
    setBonus(obj.getBonus());
    if (tara)
        delete []tara;
    tara=new char[strlen(obj.getTara())+1];
    strcpy(tara,obj.getTara());
    return *this;
}

Capitala::~Capitala()
{
    delete []tara;
}
