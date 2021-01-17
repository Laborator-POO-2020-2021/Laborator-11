#include "tara.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate **v)
{
	this -> v = new Localitate*[5];
	for (int i = 0; i < 5; i++)
		this -> v[i] = v[i];
	
}

void Tara::afisare()
{
	for (int i = 0; i < 3; i++)
		v[i] -> afisare();
	cout << endl;
}

int Tara::NrLocuitori()
{
	int total = 0;
	
	for (int i = 0; i < 3; i++)
		total = total + v[i] -> getLocuitori();
	
	return total;
}	

int Tara::getVenitTotal()
{
	int total = 0;
	
	for (int i = 0; i < 3; i++)
		total = total + v[i] -> getVenit();	
}	


