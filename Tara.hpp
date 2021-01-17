#ifndef TARA_HPP
#define TARA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Tara
{
	Localitate **v;
public:
	Tara();
	~Tara();
        virtual void afisare() = 0;
        virtual ~Tara() = 0;
        virtual bool isOras() = 0;
	virtual int venit_total() = 0;
	virtual int locuitori() = 0;
};

#endif
