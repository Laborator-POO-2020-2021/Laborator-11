#include <iostream>
#include <cstring>

#include "localitate.hpp"
#include "oras.hpp"
#include "minicipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

using namespace std;


int main()
{
	Localitate **v;
	Tara *a;
	v = new Localitate*[10];
	v[0] = new Localitate("Pastraveni",100,100);
	v[1] = new Oras("Craiova",200,200,200);
	v[2] = new Minicipiu("Bucresti","Bucuresti",10000,10000,10000);
	v[3] = new Capitala("Romanaia","Iasi",300,300,300);
	v[4] = NULL;
	
	Tara **t;
	t= new Tara*[5];
	t[0] = new Tara(v);
	
	Localitate **i = new Localitate*[2];
	i[0] = new Localitate("Ciuruieni",400,400);
	i[1] = NULL;
	t[1] = new Tara(i);
	
	Localitate **ii = new Localitate*[2];
	ii[0] = new Localitate("Valenii aplecati",50,50);
	ii[1] = NULL;
	t[2] = new Tara(ii);
	
	Localitate **iii = new Localitate*[2];
	iii[0] = new Localitate("Undeva langa Prut",700,700);
	iii[1] = NULL;
	t[3] = new Tara(iii);
	
	Localitate **vi = new Localitate*[2];
	vi[0] = new Oras("Ciuruieni 2, acum mai bun ",500,300,2);
	vi[1] = NULL;
	t[4] = new Tara(vi);
	
	for(int j = 0; j < 4; j++)		
		for(int k = j+1; k < 5; k++)	
		if(t[j]->recensamant()>t[k]->recensamant())
			{
				a = t[j];
				t[j] = t[k];
				t[k] = a;
			}
	
	cout<<"afisare dupa sortarea in funcie de numarul de locuitori: "<<endl;				
	for(int j = 0;j < 5;j ++)
	{
		t[j]->afisare();
		cout << "----------------------------------------------" << endl;
	}
	
	
	for(int j = 0; j < 4; j++)		
		for(int k = j+1; k < 5; k++)	
			if(t[j]->buget()>t[k]->buget())
			{
				a = t[j];
				t[j] = t[k];
				t[k] = a;
			}
	cout<<"afisare dupa sortarea in funcie de venitul mediu: "<<endl;		
	for(int j = 0;j < 5;j ++)
	{
		t[j]->afisare();
		cout << "----------------------------------------------" << endl;
	}					
	
	
}
