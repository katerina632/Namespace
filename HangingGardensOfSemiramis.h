#pragma once
#include<iostream>
using namespace std;

namespace WondersOfTheWorld {
	namespace HangingGardensOfSemiramis {

		class HangingGardensOfSemiramis {
		private:
			string currentCountry;
			int creationTime;
			string creators;
		public:
			HangingGardensOfSemiramis() : currentCountry("Iraq"), creationTime(600), creators("Babylonians") {}
			~HangingGardensOfSemiramis() {};

			void Show() const;
		};
	}

}
