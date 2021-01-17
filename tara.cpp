#include "tara.hpp"

Tara::Tara()
{
    this->v = NULL;
}
Tara::Tara(Localitate ** v):v(v){}

void Tara::afisare(ostream &out)
{
    int i=0;
	while(v[i] != NULL)
	{
		v[i]->afisare(out);
		cout<<endl;
		i++;
	}
}
ostream &operator<<(ostream &out, Tara &obj)
{
    obj.afisare(out);
    return out;
}
int Tara::Venit()
{
    int suma =0;
    for(int i=0; i<4; i++)
        suma = suma + v[i]->getVenit_mediu(); //
    return suma;
}
int Tara::Locuitori()
{
    int suma = 0;
    for(int i=0; i<4; i++)
        suma = suma + v[i]->get_NrLoc();
    return suma;
}
Tara::~Tara()
{
    delete []v;
}