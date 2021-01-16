#ifndef CAPITALA_HPP
#define CAPITALA_HPP
#include <bits/stdc++.h>
#include "oras.hpp"
using namespace std;

class Capitala : public Oras {
  char *tara;
public:
  Capitala();
  Capitala(const char*,int,const char*,int,int);
  ~Capitala();
};

#endif
