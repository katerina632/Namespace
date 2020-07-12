#include<iostream>
#include"GreatBritain.h"
#include"Poland.h"
#include"Ukraine.h"
using namespace std;


int main() {

	GreatBritain::London london;
	Poland::Warsaw warsaw;
	Ukraine::Kiev kiev;

	if (warsaw.GetPopulation() > london.GetPopulation()) {
		if (warsaw.GetPopulation() > kiev.GetPopulation()) {
			cout << "City ​​with the largest population - Warsaw!" << endl;
			warsaw.Show();

		}
	}
	else if (kiev.GetPopulation() > london.GetPopulation()) {
		cout << "City ​​with the largest population - Kyiv!" << endl;
		kiev.Show();

	}
	else {
		cout << "City with the largest population - London!" << endl;
		london.Show();		
	}

	system("pause");
	return 0;
}