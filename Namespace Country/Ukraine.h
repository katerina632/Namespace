#pragma once
#include<iostream>
using namespace std;

 namespace Ukraine {
     class Kiev {
     private:
         int population;
         double square;
     public:
         Kiev() : population(2965500), square(847.66) {}
         ~Kiev() {}

         void Show() const;
        
         int GetPopulation();

     };
}