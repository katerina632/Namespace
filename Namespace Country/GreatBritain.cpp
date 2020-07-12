#include "GreatBritain.h"

void GreatBritain::London::Show() const
{
    cout << "London is the capital of United Kingdom of Great Britain!" << endl;
    cout << "Population: " << population << endl;
    cout << "Square: " << square << " square kilometers" << endl;
}

int GreatBritain::London::GetPopulation()
{
    return population;
}
