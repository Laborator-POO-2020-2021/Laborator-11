#ifndef LOCALITATE_HPP
#define LOCALITATE_HPP

#include<iostream>
#include<cstring>
using namespace std;



class Localitate {
	protected:
        char *nume;
        int nr_locuitori;
        int venit_mediu;
public:
		Localitate();
		Localitate(const char*,int,int);
	    Localitate(const Localitate&);
	    Localitate& operator=(const Localitate&);
	  
	    virtual	 ~Localitate() ;//=0;
	//    virtual 
		virtual void afisare() ;//=0;
	    //virtual 
		virtual int getVenit();//=0;
		virtual int getLocuitori();//=0;
	    
};
#endif
        

