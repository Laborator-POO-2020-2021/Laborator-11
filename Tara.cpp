#include "Tara.hpp"

Tara::Tara(): v(NULL) {};

Tara::Tara(Localitate **v)
{
    this->v = v;
};

/*Tara::~Tara()
{
	for(int i = 0; v[i] != NULL; i++)
	{
		delete v[i];
		v[i] = NULL;
	}
	
    delete []v;
    v = NULL;
}*/

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

Tara& Tara::operator=(const Tara& tara)
{
	this->v = tara.v;
}

int Tara::getNrLocuitori()
{
    int nr_locuitori = 0;

    for(int i = 0; v[i] != NULL; i++)
        nr_locuitori += v[i]->getNrLocuitori();
    
    return nr_locuitori;
};

float Tara::getVenitMediu()
{
    int venit_mediu = 0, i;

    for(i = 0; v[i] != NULL; i++)
        venit_mediu += v[i]->getVenit();
    venit_mediu = venit_mediu / i;

    return venit_mediu;
};
