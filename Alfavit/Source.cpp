#include<iostream>
#include<vector>
#include<algorithm>
#include"Alfavit.h"
using namespace std;

int main() {
	vector<string>w{ "toom","ben","khabib" };
	SortByLetters s;
	s.Sort(w);
	cout << endl;
	vector<string>w2{ "1234","1","33446" };
	SortBySize s2;
	s2.Sort(w2);
}