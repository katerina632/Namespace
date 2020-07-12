#pragma once
#include<iostream>
using namespace std;

namespace Poland {
    class Warsaw {
    private:
        int population;
        double square;
    public:
        Warsaw() : population(1790658), square(517.24) {}
        ~Warsaw() {}

        void Show() const;

        int GetPopulation();

    };
}