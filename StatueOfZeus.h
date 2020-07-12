#pragma once
#include<iostream>
using namespace std;

namespace WondersOfTheWorld {
	namespace StatueOfZeus {

		class StatueOfZeus {
		private:
			string currentCountry;
			int creationTime;
			string creators;
		public:
			StatueOfZeus() : currentCountry("Greece"), creationTime(435), creators("Greeks - sculptor Phidias") {}
			~StatueOfZeus() {};

			void Show() const;
		};
	}

}
