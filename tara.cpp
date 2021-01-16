#include "tara.hpp"
	
	Tara::Tara():v(NULL) {
	} 
	
	Tara::Tara(Localitate **vec):v(vec) {		
	}
	
	Tara::~Tara() {
		delete []v;
	}
	
	void Tara::afisare() {
		int i = 0;
		while(v[i]) {
			cout << "Localitate " << i+1 << endl;
			v[i++]->afisare();
			cout << endl;
		}
	}
	
	int Tara::getPop() {
		int aux = 0, i = 0;
		while(v[i]) {
			aux += v[i++]->getPop();
		}
		return aux;
	}
	
	float Tara::getVenitMed() {
		float aux = 0;
		int i = 0;
		while(v[i]) {
			aux += v[i++]->getVenit();
		}
		return (float)aux / i;	
	}
