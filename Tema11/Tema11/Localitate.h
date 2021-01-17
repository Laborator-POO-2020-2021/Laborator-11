#pragma once
class Localitate
{
protected:
	char* nume;
	int nr_locuitori;
	int venit_mediu;
public:
	Localitate();
	Localitate(char*, int, int);
	~Localitate();
	virtual int getLocuitori();
	virtual void print();
	virtual int getVenit();
};

