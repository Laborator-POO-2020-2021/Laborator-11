#include "Tara.hpp"

Tara::Tara(): v(NULL){}

~Tara::Tara()

{
	delete []v;
}
void Tara::afisare()
{
	int i=0;
	while(v[i]!=NULL)
	{
	 	cout << "LOCALITATEA " << i+1 << endl;
		v[i]->afisare();
		i++;
	}
}

bool Tara::isOras()
{
	return 0;
}

int Tara::venit_total()
{
	int i=0, venit=0;
	while(v[i]!=NULL)
	{
		venit=venit+v[i]->venit_total();
		i++
	}
	return venit;
}

int Tara::locuitori()
{
	L=0;
	while(v[i]!=NULL)
		L = L + v[i]->locuitori();
	return L;
}

~Tara::Tara()
{
	delete []v;
}


