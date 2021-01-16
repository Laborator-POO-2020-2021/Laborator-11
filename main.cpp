#include <iostream>
#include <cstring>
using namespace std;


#include "Tara.hpp"


int main()
{

    Localitate *v = new Localitate[5];

    v[0] = Localitate("Romania","Muntenia",70,"Bucuresti",54895,1200);
    v[1] = Localitate("Franta","Ile de France",500,"Paris",895624,13020);
    v[2] = Localitate("Bulgaria","regiunea Sofia",70,"Sofia",7845,7000);
    v[3] = Localitate("Spania","regiunea Madrid",1000,"Madrid",278459,8000);
    v[4] = Localitate("Italia","Lazio",200,"Roma",258647,6000);

    Tara t(v);
    cout << "SORTARE DESCRESCATOARE DUPA NUMARUL DE LOCUITORI" << endl;
    t.sortare_nrloc();
    t.afisare();

    cout << endl <<"SORTARE DESCRESCATOARE DUPA VENIT" << endl;
    t.sortare_venit();
    t.afisare();

    return 0;
}
