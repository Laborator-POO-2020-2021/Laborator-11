// Implementare metode pentru clasa Tara - clasa container

#include<iostream>
using namespace std;
#include"Tara.hpp"
Tara::Tara()
{
	v = NULL;
}

Tara::Tara(Localitate **lista)
{
	v = lista;
}

Tara::~Tara()
{
	int i = 0;
	while(v[i] != NULL)
	{
		delete[] v[i];
	}
	delete[] v;
}

int Tara::get_locuitori()
{
	int locuitori = 0;
	int i = 0;
	while(v[i] != NULL)
	{
		locuitori += v[i]->getLocuitori();
		i++;
	}
	return locuitori;
}

int Tara::get_venit()
{
	int venit = 0;
	int i = 0;
	while(v[i] != NULL)
	{
		venit += v[i]->getVenit();
		i++;
	}
	return venit;
}

void Tara::add_object(Localitate* loc)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if(v != NULL)
	{
		while(v[i] !=NULL)			// Aflu cate obiecte am intr-o tara
		{
			i++;
		}
	}	
				
	Localitate** v_aux = new Localitate*[i+2];	// Creez un nou vector auxiliar si salvez informatia
	while(j < i)
	{
		v_aux[j] = v[j];
		j++;
	}
	
	v_aux[i] = loc;
	v_aux[i+1] = NULL;
	
	if( v != NULL)
	{
		/*
		while(v[k] !=NULL)			//Eliberez vectorul vechi
		{
			delete[] v[k];
			k++;
		}
		*/
		delete[] v;
		//k = 0;
	}

	
	
	v = new Localitate*[i+2];		//Creez un vector nou care sa cuprinda noul obiect adaugat.
	while(v_aux[k] != NULL)
	{
		v[k] = v_aux[k];
		k++;
	}
	v[i+1] = NULL;
	
	delete[] v_aux;		//Eliberez vectorul auxiliar
}

void Tara::afisare()
{
	int i = 0;
	while(v[i] !=NULL)
	{
		v[i]->afisare();
		cout<<endl;
		i++;
	}
}
