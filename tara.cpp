#include "tara.hpp"

Tara::Tara (Localitate **loc)
{
    Localitate *p;
    int i;
    for (i = 0, p = loc[0]; p != NULL; i++, p = loc[i])
    {
        
    }
    cout << i;
}