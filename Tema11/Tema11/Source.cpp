#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Tara.h"
#include "Municipiu.h"
#include "Capitala.h"

using namespace std;

int main()
{
	Tara** tari = new Tara * [5];
	Tara tara(5);
	Tara tara2(4);
	Tara tara3(3);
	Tara tara4(2);
	Tara tara5(2);

	tari[0] = &tara;
	tari[1] = &tara2;
	tari[2] = &tara3;
	tari[3] = &tara4;
	tari[4] = &tara5;

	char* nume = new char[20];
	strcpy(nume, "LOCALITATE1");
	char* nume1 = new char[20];
	strcpy(nume1, "LOCALITATE2");
	char* nume2 = new char[20];
	strcpy(nume2, "LOCALITATE3");
	char* nume3 = new char[20];
	strcpy(nume3, "LOCALITATE4");
	char* nume4 = new char[20];
	strcpy(nume4, "LOCALITATE5");

	char* nume10 = new char[20];
	strcpy(nume10, "ORAS1");
	char* nume20 = new char[20];
	strcpy(nume20, "ORAS2");
	char* nume30 = new char[20];
	strcpy(nume30, "ORAS3");
	char* nume40 = new char[20];
	strcpy(nume40, "ORAS4");

	char* nume100 = new char[20];
	strcpy(nume100, "REGIUNE1");
	char* nume200 = new char[20];
	strcpy(nume200, "REGIUNE2");
	char* nume300 = new char[20];
	strcpy(nume300, "REGIUNE3");

	char* nume1000 = new char[20];
	strcpy(nume1000, "TARA1");
	char* nume2000 = new char[20];
	strcpy(nume2000, "TARA2");


	Localitate loc1(nume, 200, 2000);
	Localitate loc2(nume1, 300, 3000);
	Localitate loc3(nume2, 400, 4000);
	Localitate loc4(nume3, 500, 5000);
	Localitate loc5(nume4, 600, 6000);

	Oras oras1(100, nume10, 200, 2000);
	Oras oras2(200, nume20, 300, 3000);
	Oras oras3(300, nume30, 400, 4000);

	Municipiu mun1(nume100, 100, nume10, 200, 2000);
	Municipiu mun2(nume200, 200, nume20, 300, 3000);
	
	Capitala cap1(nume1000, 100, nume10, 200, 2000);

	tari[0]->getLocalitati()[0] = &loc1;
	tari[0]->getLocalitati()[1] = &oras1;
	tari[0]->getLocalitati()[2] = &mun1;
	tari[0]->getLocalitati()[3] = &cap1;
	tari[0]->getLocalitati()[4] = NULL;

	tari[1]->getLocalitati()[0] = &loc2;
	tari[1]->getLocalitati()[1] = &oras2;
	tari[1]->getLocalitati()[2] = &mun2;
	tari[1]->getLocalitati()[3] = NULL;

	tari[2]->getLocalitati()[0] = &loc3;
	tari[2]->getLocalitati()[1] = &oras3;
	tari[2]->getLocalitati()[2] = NULL;

	tari[3]->getLocalitati()[0] = &loc4;
	tari[3]->getLocalitati()[1] = NULL;

	tari[4]->getLocalitati()[0] = &loc5;
	tari[4]->getLocalitati()[1] = NULL;

	for (int i = 0; i < 5; i++)
		for (int j = i; j < 5; j++)
		{
			if (tari[i]->getLocuitori() > tari[j]->getLocuitori())
			{
				Tara* aux = tari[i];
				tari[i] = tari[j];
				tari[j] = aux;
			}
		}


	for (int i = 0; i < 5; i++)
		cout << tari[i]->getLocuitori() << endl;



	for (int i = 0; i < 5; i++)
		for (int j = i; j < 5; j++)
		{
			if (tari[i]->getVenit() > tari[j]->getVenit())
			{
				Tara* aux = tari[i];
				tari[i] = tari[j];
				tari[j] = aux;
			}
		}

	for (int i = 0; i < 5; i++)
		cout << tari[i]->getVenit() << endl;
	
	return 0;
}