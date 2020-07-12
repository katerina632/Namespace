#pragma once
#include<iostream>
using namespace std;

namespace WondersOfTheWorld {
	namespace AlexandriaLighthouse {

		class AlexandriaLighthouse {
		private:
			string currentCountry;
			int creationTime;
			string creators;
		public:
			AlexandriaLighthouse() : currentCountry("Egypt"), creationTime(3), creators("Ptolemaic dynasty") {}
			~AlexandriaLighthouse() {};

			void Show() const;
		};
	}
}