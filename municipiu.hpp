#ifndef MUNICIPIU_HPP
#define MUNICIPIU_HPP
#include <bits/stdc++.h>
#include "oras.hpp"
using namespace std;

class Municipiu : public Oras {
  char *regiune;
public:
  Municipiu();
  Municipiu(const char*);
  Municipiu(const char*,int,const char*,int,int);
  ~Municipiu();
};
#endif
