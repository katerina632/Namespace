#pragma once
#include<iostream>
using namespace std;

namespace WondersOfTheWorld {
	namespace Mausoleum {

		class Mausoleum {
		private:
			string currentCountry;
			int creationTime;
			string creators;
		public:
			Mausoleum() : currentCountry("Turkey"), creationTime(351), creators("Carians, Persians, Greeks") {}
			~Mausoleum() {};

			void Show() const;
		};
	}

}
