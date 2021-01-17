#include "tara.h"

Tara :: Tara() : v(NULL) {}

Tara :: Tara(Localitate **v)
{
    this->v = v;
}

int Tara :: getAverageWage()
{
    long long tot_venit = 0;
    int tot_loc = 0;
    for (int i = 0; v[i] != NULL; i++)
    {
        tot_venit += (v[i]->getWage() * v[i]->getLocuitori());
        tot_loc += v[i]->getLocuitori();
    }
    return tot_venit/tot_loc;
}

char* Tara :: getName()
{
    for (int i = 0; v[i] != NULL; i++)
        if (typeid(*v[i]).name() == typeid(Capitala).name())
            return dynamic_cast<Capitala*>(v[i])->getTara();
    return NULL;
}

int Tara :: getLocuitori()
{
    int tot_loc = 0;
    for (int i = 0; v[i] != NULL; i++)
    {
        tot_loc += v[i]->getLocuitori();
    }
    return tot_loc;
}

void Tara :: afisare()
{
    cout << "Tara: " << this->getName() << "\nLocalitati: \n";
    for (int i = 0; v[i] != NULL; i++)
    {

        v[i]->afisare();
        cout << "\n\n";
    }
}

Tara :: ~Tara()
{
    //localitatile sunt declarate static, deci se distrug ok
    delete []v;
}
