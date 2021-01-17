#include "oras.hpp"

Oras::Oras()
{
    bonus_venit=0;
}

Oras::Oras(char n[],int nr, int venit, int bonus):Localitate(n,nr,venit)
{
    bonus_venit=bonus;
}

int Oras::getBonus() const
{
    return bonus_venit;
}

ostream& operator<<(ostream& out, Oras &m)
{
    out<<"Nume: "<<m.getNume()<<endl;
    out<<"Nr Locuitori: "<<m.getNr()<<endl;
    out<<"Venit Mediu: "<<m.getVenit()<<endl;
    out<<"Venit Bonus: "<<m.getBonus()<<endl;
    return out;
}

void Oras::afisare()
{
    cout<<"Nume: "<<getNume()<<endl;
    cout<<"Nr Locuitori: "<<getNr()<<endl;
    cout<<"Venit Mediu: "<<getVenit()<<endl;
    cout<<"Venit Bonus: "<<getBonus()<<endl;
}

Oras::Oras(Oras& l)
{
    setNume(getNume());
    setNrLoc(l.getNr());
    setVenit(l.getVenit());
    bonus_venit=l.getBonus();
}

void Oras::setBonus(int b)
{
    bonus_venit=b;
}

Oras & Oras::operator=(const Oras &obj)
{
    setNume(obj.getNume());
    setNrLoc(obj.getNr());
    setVenit(obj.getVenit());
    setBonus(obj.getBonus());
    return *this;
}

Oras::~Oras()
{

}
