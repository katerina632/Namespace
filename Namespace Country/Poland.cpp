#include "Poland.h"

void Poland::Warsaw::Show() const
{
    cout << " Warsaw is the capital of Poland!" << endl;
    cout << "Population: " << population << endl;
    cout << "Square: " << square << " square kilometers" << endl;
}

int Poland::Warsaw::GetPopulation()
{
    return population;
}
