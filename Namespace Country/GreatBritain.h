#pragma once
#include<iostream>
using namespace std;

namespace GreatBritain {
    class London {
    private:
        int population;
        double square;
    public:
        London() : population(8908081), square(1572.00) {}
        ~London() {}

        void Show() const;

        int GetPopulation();

    };
}
