#include "Municipiu.hpp"
#include "Capitala.hpp"

int main()
{
	Tara **tari, *aux;
	int i, j;
	*tari=new Tara*[5];
	tari[0]->v=new Localitate*[4];
	tari[1]->v=new Localitate*[1];
	tari[2]->v=new Localitate*[1];
	tari[3]->v=new Localitate*[4];
	tari[4]->v=new Localitate*[1];
	
	tari[0]->v[0]=new Capitala("Bucuresti", 2000000, 5000, 70, "Romania");
	tari[0]->v[1]=new Municipiu("Onesit", 30000, 2000, 50, "Moldova");
	tari[0]->v[2]=new Localitate("Adjud", 300000, 3000);
	tari[0]->v[3]=new Oras("Brasov", 500000, 4000, 65);
	
	tari[1]->v[0]=new Localitate("Ploiesti", 100000, 5000);

	tari[2]->v[0]=new Capitala("Washington DC", 800000, 30000, 1000, "SUA");

	tari[3]->v[0]=new Municipiu("Tg.Mures", 200000, 4000, 90, "Transilvania");

	tari[4]->v[0]=new Oras("Londra", 9000000, 80000, 700);

	aux = new Tara(sizeof(tari[0]));
	for(i=0; i < 4; i++)
		for(j=i; j<5; j++)
			if(tari[i]->locuitori() > tari[j]->locuitori())
			{
				aux=tari[i];
				tari[i]=tari[j];
				tari[j]=aux;
			}
	for(i=0; i < 4; i++)
		for(j=0; j<5; j++)
			if(tari[i]->venit_total() > tari[j]->venit_total())
			{
				aux=tari[i];
				tari[i]=tari[j];
				tari[j]=aux;
			}
	for(i=0; i<5; i++)
		tari[i]->afisare();

	return 0;
}
