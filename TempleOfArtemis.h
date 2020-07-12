#pragma once
#include<iostream>
using namespace std;

namespace WondersOfTheWorld {
	namespace TempleOfArtemis {

		class TempleOfArtemis {
		private:
			string currentCountry;
			int creationTime;
			string creators;
		public:
			TempleOfArtemis() : currentCountry("Turkey"), creationTime(351), creators("Lydians, Greeks, Persians") {}
			~TempleOfArtemis() {};

			void Show() const;
		};
	}
}
