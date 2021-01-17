#include "Tara.hpp"

Tara::Tara() {
	v=new Localitate*[1];
	v[0]=NULL;
}

Tara::Tara(Localitate **v) {
	int i=0;
	while(v[i]!=NULL) {
		this->v[i] = v[i];
		i++;
	}
}

Tara::Tara(const Tara& obj) {
	*v = NULL;
	*this = obj;
}

Tara::~Tara() {
	delete []v;
}

Tara& Tara::operator=(const Tara& obj) {

	this->v =obj.v;


	return *this;
}

void Tara::put(Localitate *obj) {
	int i=0;
	int k=0;
	while(v[i]!=NULL) {
		k++;
		i++;
	}

	Localitate **buffer;
	buffer=new Localitate*[k+2];
	if(k>0)
		for(i=0; i<k; i++) {
			*(buffer+i)=*(v+i);

		}

	*(buffer+k)=obj;
	*(buffer+k+1)=NULL;
	delete []v;
	v=buffer;

}



void Tara::afisare() {
	int i=0;
	while(v[i]!=NULL) {
		v[i]->afisare();
		cout << endl;
		i++;
	}

}

int Tara::getLoc() {
	int t=0;
	int i=0;
	while(v[i]!=NULL) {
		t=t+v[i]->getLoc();
		i++;
	}

	return t;


}

int Tara::getVenit() {
	int t=0;
	int i=0;
	while(v[i]!=NULL) {
		t=t+v[i]->getVenit();
		i++;
	}

	return t;


}

