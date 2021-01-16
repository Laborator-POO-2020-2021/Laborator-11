#include "tara.hpp"




Tara::Tara() : v(nullptr) {}

Tara::Tara(Localitate **v)
{

    int i;
    for (i = 0; v[i] != nullptr; i++)
        ;
   
    this->v = new Localitate *[i+1];
    for (int i = 0; v[i] != nullptr; i++)
    {
        this->v[i] = v[i]->clone();
    }
     this->v[i] = nullptr;
}

Tara::~Tara()
{
    if (this->v != nullptr)
    {
        for (int i = 0; this->v[i] != nullptr; i++)
        {
            delete this->v[i];
        }
        delete[] this->v;
    }
}

Tara::Tara(const Tara &obj)
{
    v = nullptr;
    (*this) = obj;
}

Tara &Tara::operator=(const Tara &obj)
{
    if (this->v != nullptr)
    {
        for (int i = 0; this->v[i] != nullptr; i++)
        {
            delete this->v[i];
        }
        delete[] this->v;
    }
    int i;
    for (i = 0; obj.v[i] != nullptr; i++)
        ;

    this->v = new Localitate *[i+1];
    
    for (int i = 0; obj.v[i] != nullptr; i++)
    {
        this->v[i] = obj.v[i]->clone();
    }
    this->v[i] = nullptr;

    return *this;
}

ostream &operator<<(ostream &out, const Tara& obj){
    out<<"Localitatile din Tara sunt : "<<endl;
    for (int i = 0; obj.v[i] != nullptr; i++){
        obj.v[i]->print();
        cout<<endl;
    }
    return out;
}

int Tara::getNumarLocuitoriTara(){ 
    int nrLoc = 0;
      for (int i = 0; this->v[i] != nullptr; i++){
          nrLoc += this->v[i]->getNrLocuitori();
      }
    return nrLoc;
}

float Tara::getVenitMediuTara(){ 
    float venit = 0;
      for (int i = 0; this->v[i] != nullptr; i++){
        //   cout<<this->v[i]->getVenit()<<endl;
          venit += this->v[i]->getVenit();
      }
    return venit;
}