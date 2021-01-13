#include "capitala.hpp"
#include "municipiu.hpp"
#include "tara.hpp"
#include "localitate.hpp"
#include "oras.hpp"

int main()
{
    //Localitate ceva("Pitesti", 100, 500);
    //Oras ceva("Pitesti", 100, 500, 150);
    //Municipiu ceva("Pitesti", 100, 500, 150, "Dobrogea");
    //Capitala ceva("Pitesti", 100, 500, 150, "Romania");

    cout << ceva<<endl;
    cout << ceva.getLocuitori() << endl;
    cout << ceva.getVenit_mediu();
    return 0;
}