#include "Ukraine.h"

void Ukraine::Kiev::Show() const
{
    cout << "Kiev is the capital of Ukrain!" << endl;
    cout << "Population: " << population << endl;
    cout << "Square: " << square << " square kilometers" << endl;
}

int Ukraine::Kiev::GetPopulation()
{
    return population;
}
