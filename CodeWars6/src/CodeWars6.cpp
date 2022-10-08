//============================================================================
// Name        : CodeWars6.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Kata
{
public:

vector<string> towerBuilder(int nFloors)
    {
	vector<string> result;
	int j = 1;
	int k = nFloors - 1;
	for(int i = 0; i < nFloors; ++i){
		string str;
    str.resize(nFloors * 2 - 1, ' ');
		replace(begin(str) + k, end(str) - k, ' ', '*');
		result.push_back(str);
    --k;
		j += 2;
	}
        return result;
    }

};


void PrintVec(const vector<string>& v){
	for(const auto& c : v){
		cout << c << "\n";
	}
}

int main() {
	Kata kat;
	PrintVec(kat.towerBuilder(2));
	return 0;
}
