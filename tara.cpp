#include "tara.hpp"

Tara::Tara(): v(NULL) {}

Tara::Tara(Localitate** v)
{
    int i;
    for(i = 0; v[i] != NULL; i++)   
    	this->v = new Localitate*[i+1];
    	
    for(int i = 0; v[i] != NULL; i++)    
        this->v[i] = v[i]->clone();
    
    this->v[i] = NULL;
}

Tara::Tara(const Tara& obj)
{
    v = NULL;
    (*this) = obj;
}

Tara::~Tara()
{
    if(this->v != NULL)
    {
        for(int i = 0; this->v[i] != NULL; i++)        
            delete this->v[i];
        
        delete[] this->v;
    }
}

Tara& Tara::operator=(const Tara& obj)
{
    if(this->v != NULL)
    {
        for(int i = 0; this->v[i] != NULL; i++)
        {
            delete this->v[i];
        }
        delete[] this->v;
    }

    int i;
    for(i = 0; obj.v[i] != NULL; i++)
        ;
    
    this->v = new Localitate*[i+1];

    for (int i = 0; obj.v[i] != NULL; i++)
    {
        this->v[i] = obj.v[i]->clone();
    }
    this->v[i] = NULL;

    return *this;
}

ostream& operator<<(ostream& out, const Tara& obj)
{
   
    for(int i = 0; obj.v[i] != NULL; i++)
    {
        obj.v[i]->afisare();
        cout << endl;
    }

    return out;
}

int Tara::getNumarLocuitoriTara()
{
    int nr = 0;
    for(int i = 0; this->v[i] != NULL; i++)
    {
        nr += this->v[i]->getLocuitori();
    }

    return nr;
}

int Tara::getVenitMediuTara()
{
    int venit = 0;
    for(int i = 0; this->v[i] != NULL; i++)
        venit += this->v[i]->getVenitMediu();

    return venit;
}

