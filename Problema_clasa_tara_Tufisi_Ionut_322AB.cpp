#include "Problema_header_tara_Tufisi_Ionut_322AB.hpp"
#include "Problema_header_localitate_Tufisi_Ionut_322AB.hpp"

Tara::Tara():v(NULL){}

Tara::Tara(Localitate** v):v(v){}

void Tara::afisare(){

    int i=0;

    while(v[i]!=NULL)
	 {
      v[i]->afisare();
      i++;
	 }
	 cout << endl;
}

int Tara::getVenitMed(){

    int i=0, s=0;

    while(v[i]!=NULL)
	 {
      s = s + v[i]->getVenitMed();
      i++;
	 }

	return s;
}
int Tara::getNrLoc(){

    int i=0, s=0;

    while(v[i]!=NULL)
	 {
      s = s + v[i]->getNrLoc();
      i++;
	 }

	return s;
}
