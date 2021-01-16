#include "functions.hpp"

void sortVenit(Tara *vec, int nrCountries)
{
    for (int i = 0; i < nrCountries - 1; i++)
        for (int j = i + 1; j < nrCountries; j++)
            if (vec[i].getVenit_mediu() < vec[j].getVenit_mediu())
            {
                Tara temp;
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
}

void sortLocuitori(Tara *vec, int nrCountries)
{
    for (int i = 0; i < nrCountries - 1; i++)
        for (int j = i + 1; j < nrCountries; j++)
            if (vec[i].getLocuitori() < vec[j].getLocuitori() )
            {
                Tara temp;
                temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
}