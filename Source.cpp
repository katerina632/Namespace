#include<iostream>
#include"ColossusOfRhodes.h"
#include"Mausoleum.h"
#include"Alexandria Lighthouse.h"
#include"TempleOfArtemis.h"
#include"StatueOfZeus.h"
#include"HangingGardensOfSemiramis.h"
#include"Pyramid.h"

using namespace std;
using namespace WondersOfTheWorld;

int main() {

	Mausoleum::Mausoleum m;
	ColossusOfRhodes::ColossusOfRhodes cr;
	AlexandriaLighthouse::AlexandriaLighthouse al;
	TempleOfArtemis::TempleOfArtemis ta;
	StatueOfZeus::StatueOfZeus sz;
	HangingGardensOfSemiramis::HangingGardensOfSemiramis hs;
	Pyramid::Pyramid p;

	p.Show();
	hs.Show();
	sz.Show();
	ta.Show();
	m.Show();
	cr.Show();
	al.Show();
	
	
	
	


	system("pause");
	return 0;
}