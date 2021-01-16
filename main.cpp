#include <bits/stdc++.h>
#include "oras.hpp"
#include "municipiu.hpp"
#include "tara.hpp"
#include "capitala.hpp"
#include "localitate.hpp"
using namespace std;

int main()
{

	// TASK 2
	Localitate **local1;
	local1 = new Localitate*[5];
	local1[0] = new Localitate("Test",100,200);
	local1[1] = new Oras(500,"test1",120,200);
	local1[2] = new Capitala("Romania",500,"test1",100,200);
	local1[3] = new Municipiu("RegiuneaRomania",500,"test1",100,200);
	local1[4] = NULL;

	Localitate **local2;
	local2 = new Localitate*[3];
	local2[0] = new Localitate("Test2",1100,2030);
	local2[1] = new Oras(5400,"Tryhard",1230,2020);
	local2[3] = NULL;

	Localitate **local3;
	local3 = new Localitate*[3];
	local3[0] = new Localitate("Test21",11300,21030);
	local3[1] = new Capitala("TotRomania",500,"test1",1200,2300);
	local3[2] = NULL;

	Localitate **local4;
	local4 = new Localitate*[2];
	local4[0] = new Municipiu("Nop",500,"te",1030,2001);
	local4[1] = NULL;

	Localitate **local5;
	local5 = new Localitate*[2];
	local5[0] = new Municipiu("RegiuneaRomaa3ania",5200,"test1",23,20230);
	local5[1] = NULL;


	Tara **tari;
	tari = new Tara*[5];
	tari[0] = new Tara(local1);
	tari[1] = new Tara(local2);
	tari[2] = new Tara(local3);
	tari[3] = new Tara(local4);
	tari[4] = new Tara(local5);

	// TASK 3
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(tari[i]->getNrLocuitori() > tari[j]->getNrLocuitori())
				swap(tari[i],tari[j]);
		}
	}

	// TASK 4

	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(tari[i]->getVenitMediu() > tari[j]->getVenitMediu())
				swap(tari[i],tari[j]);
		}
	}


	// TASK 5
	for(int i=0;i<5;i++)
		tari[i]->afis();
	return 0;
}
