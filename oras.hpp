#ifndef ORAS_HPP
#define ORAS_HPP
#include <bits/stdc++.h>
#include "localitate.hpp"
using namespace std;

class Oras : public Localitate{
  int bonus_venit; // venit_oras = venit_local + bonus_venit

public:
    Oras();
    Oras(int);
    Oras(int,const char*,int,int);
    ~Oras();

    void afis();
};
#endif
