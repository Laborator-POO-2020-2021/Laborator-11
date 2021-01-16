#ifndef TARA_HPP
#define TARA_HPP
#include <bits/stdc++.h>
#include "localitate.hpp"
using namespace std;

class Tara {
  Localitate **v; // parcurgem pana la NULL

public:
  Tara();
  Tara(Localitate**);
  ~Tara();

  int getNrLocuitori();
  double getVenitMediu();
  void afis();
};

#endif
