#include "municipiu.hpp"
#include "capitala.hpp"
#include "tara.hpp"

int main()
{
    //cerinta 2
    int i, j;

    Localitate **a = new Localitate *[5];
    a[0] = new Localitate ("Horezu", 10400, 1000);
    a[1] = new Oras ("Rm Valcea", 20000, 2040, 500);
    a[2] = new Municipiu ("Arad", 25000, 3500, 700, "Banat");
    a[3] = new Capitala ("Bucuresti", 55000, 5600, 2700, "Romania");
    a[4] = nullptr;
    Tara vec1(a);

    Localitate **b = new Localitate *[4];
    b[0] = new Localitate ("Maastricht", 121050, 1904);
    b[1] = new Oras ("Alkmaar", 94216, 6700, 234);
    b[2] = new Capitala ("Amsterdam", 758198, 3808, 478, "Olanda");
    b[3] = nullptr;
    Tara vec2(b);

    Localitate **c = new Localitate *[4];
    c[0] = new Localitate ("Geneva", 201500, 9800);
    c[1] = new Oras ("Zurich", 203700, 7890, 289);
    c[2] = new Capitala ("Berna", 136300, 13000, 1070, "Elvetia");
    c[3] = nullptr;
    Tara vec3(c);

    Localitate **d = new Localitate *[5];
    d[0] = new Localitate ("Nara", 123000, 5000);
    d[1] = new Oras ("Kobe", 300000, 6600, 2000);
    d[2] = new Municipiu ("Osaka", 370000, 8000, 2800, "Kinki");
    d[3] = new Capitala ("Tokyo", 500000, 12000, 3670, "Japonia");
    d[4] = nullptr;
    Tara vec4(d);

    Localitate **e = new Localitate *[5];
    e[0] = new Localitate ("Newcastle", 200700, 4560);
    e[1] = new Oras ("Liverpool", 345000, 6000, 1890);
    e[2] = new Municipiu ("Manchester", 450000, 6800, 3000, "North West England");
    e[3] = new Capitala ("Londra", 600000, 10730, 4200, "Anglia");
    e[4] = nullptr;
    Tara vec5(e);

    Tara *tara = new Tara[5];
    tara[0] = vec1;
    tara[1] = vec2;
    tara[2] = vec3;
    tara[3] = vec4;
    tara[4] = vec5;

    cout << "Afisati tarile introduse: \n";
    for (i = 0; i < 5; i ++)
        cout << tara[i] << endl;
    cout << endl;

    //cerinta 3
    for (i = 0; i < 4; i ++)
        for (j = i + 1; j < 5; j ++)
            if (tara[i].getLocuitori() < tara[j].getLocuitori())
            {
                Tara aux;
                aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
    cout << "Afisati tarile sortate dupa numarul de locuitori: \n";
    for (i = 0; i < 5; i ++)
        cout << tara[i] << endl;
    cout << endl;

    //cerinta 4
    for (i = 0; i < 4; i ++)
        for (j = i + 1; j < 5; j ++)
            if (tara[i].getVenit() < tara[j].getVenit())
            {
                Tara aux;
                aux = tara[i];
                tara[i] = tara[j];
                tara[j] = aux;
            }
    cout << "Afisati tarile sortate dupa venit: \n";
    for (i = 0; i < 5; i ++)
        cout << tara[i] << endl;
    cout << endl;

    //cerinta 5
    cout << "Afisati detaliile despre fiecare tara: \n";
    for (i = 0; i < 5; i ++)
        cout << tara[i] << endl;
    cout << endl;

    delete []tara;
    delete []a;
    delete []b;
    delete []c;
    delete []d;
    delete []e;

    return 0;
}
