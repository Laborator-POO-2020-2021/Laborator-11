#ifndef CAPITALA_HPP
#define CAPITALA_HPP

#include "Oras.hpp"

class Capitala : public Oras
{
        char *tara;
        public:
        	Capitala();
        	Capitala(const char *,int,const char* ,int ,int);
        	~Capitala();
        	void afisare();
        	Capitala &operator=(const Capitala &);
};
#endif
