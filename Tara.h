#ifndef TARA_H
#define TARA_h

#include"Municipiu.h"
#include"Capitala.h"

class Tara
{
private:
	Localitate** v;

public:
	Tara();
	Tara(Localitate**);
	~Tara();
	int get_nr_locuitori() const;
	int get_venit_mediu() const;
	friend ostream& operator<<(ostream&, Tara&);
	Tara& operator=(const Tara&);
};

#endif