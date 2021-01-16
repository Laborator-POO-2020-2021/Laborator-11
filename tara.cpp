
#include "tara.h"

Tara::Tara() :v(NULL)
{

}
Tara::Tara(Localitate**vect)
{
	int i=0;
	int j = 0;

	while (vect[i] != NULL)
	{
		i++;
	}
	v = new Localitate* [i+1];
	v[i] = NULL;
	for ( j = 0; j < i; j++)
	{
		v[j] = vect[j];
	
	}

}
Tara& Tara::operator =(const Tara&obj)
{
	int i = 0;
	int j = 0;
	if (v != NULL)
		v = NULL;
	while (obj.v[i] != NULL)
	{
		i++;
	}
	v = new Localitate * [i + 1];
	v[i] = NULL;
	for (j = 0; j < i; j++)
	{
		v[j] = obj.v[j];

	}
	return *this;
}
int Tara::nrloc_tot()
{
	int i = 0;
	int s = 0;
	while (v[i] != NULL)
		i++;
	for (int j = 0; j < i; j++)
		s += v[j]->locuitori();
		
			

	return s;

}
int Tara::venit_tot()
{
	int i = 0;
	int j = 0;
	int s=0;
	Localitate* aux;
	while (v[i] != NULL)
		i++;
	for (j = 0; j < i; j++)
		s = +v[j]->venit();
	return s;
}
Tara::Tara(const Tara&obj)
{
	*this = obj;
}
Tara::~Tara()
{
	int i = 0;

	while (v[i] != NULL)
	{
		i += 1;
	}
	for (int j = 0; j < i; j++)
	{
		delete v[i];

	}
	delete[]v;
}
void Tara::afisare()
{
	int i = 0;

	while (v[i] != NULL)
	{
		v[i]->afisare();
		i++;
	}


}
