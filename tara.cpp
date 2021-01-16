#include "tara.hpp"

Tara::Tara(){};
Tara::Tara(Localitate **v)
{
  this->v = v;
}

Tara::~Tara(){
  if(this->v != NULL)
  {
    delete []this->v; // TODO: check
  }
};

int Tara::getNrLocuitori()
{
  int i = 0;
  int nr_locuitori = 0;
  while(v[i] != NULL)
  {
    nr_locuitori = nr_locuitori + v[i]->getNrLocuitori();
    i++;
  }
  return nr_locuitori;
}

double Tara::getVenitMediu()
{
  int i = 0;
  int venit_total = 0;

  while(v[i] != NULL)
  {
    venit_total = venit_total + v[i]->getVenitMediu();
    i++;
  }
  return (double)venit_total/i;
}

void Tara::afis()
{
  int i = 0;
  cout << endl << "////////////TARA////////////" << endl;
  while(v[i] != NULL)
  {
    v[i]->afis();
    /*cout << "Nume localitate: " << v[i]->getNume() <<endl;
    cout << "Nr locuitori localitate" << v[i]->getNrLocuitori()<<endl;
    cout << "Venit mediu localitate: " << v[i]->getVenitMediu() <<endl;
    cout << "=======================" << endl;
    */
    i++;
  }

  cout << "//////////////////////////" << endl;
}
