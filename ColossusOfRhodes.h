#pragma once
#include<iostream>
using namespace std;

namespace WondersOfTheWorld {
	namespace ColossusOfRhodes {

		class ColossusOfRhodes {
		private:
			string currentCountry;
			int creationTime;
			string creators;
		public:
			ColossusOfRhodes() : currentCountry("Greece"), creationTime(280), creators("Greeks") {}
			~ColossusOfRhodes() {};

			void Show() const;
		};
	}

}