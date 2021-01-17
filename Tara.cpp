#include "Tara.hpp"

Tara::Tara(): v(NULL) {};

Tara::Tara(Localitate **v)
{
    this->v = v;
};

Tara::~Tara()
{
	for(int i = 0; v[i] != NULL; i++)
	{
		delete v[i];
		v[i] = NULL;
	}
	
    delete []v;
    v = NULL;
}

void Tara::afisare()
{
	if(v != NULL)
	{
	    for(int i = 0; v[i] != NULL; i++)
	    {
	        v[i]->afisare();
	        cout << endl;
	    }
	}
	else cout << "Tara nu are localitati asociate!";
}
