#include "Tara.hpp"

int main()
{
	Localitate **v;
	v = new Localitate*[4];
	
	v[0] = new Localitate("Caracal", 200, 300);
	v[1] = new Oras("Brasov", 300, 400, 100);
	v[2] = new Capitala("Bucuresti", 400, 500, 200, "Romania");
	v[3] = new Municipiu("Slatina", 500, 600, 300, "Olt");
	
	v[0]->afisare();
	v[1]->afisare();
	v[2]->afisare();
	v[3]->afisare();
}
