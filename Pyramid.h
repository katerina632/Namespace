#pragma once
#include<iostream>
using namespace std;

namespace WondersOfTheWorld {
	namespace Pyramid {
	
		class Pyramid {
		private:
			string currentCountry;
			int creationTime;
			string creators;
		public:
			Pyramid() : currentCountry("Egypt"), creationTime(2550), creators("Eyptians") {}
			~Pyramid() {};

			void Show() const;
		};
	}

}
