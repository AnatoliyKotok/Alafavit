#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;

__interface ISort{
	void Sort(vector<string>w);

};

class SortByLetters :public ISort {
	
public:
	void Sort(vector<string>w) {
		sort(w.begin(), w.end());
		for (size_t i = 0; i < w.size(); i++)
		{
			cout << w[i] << " ";
		}
	}
	
};

class SortBySize :public ISort {
public:
	void Sort(vector<string>w) {
		string tmp ;
		sort(w.begin(), w.end());
		for (size_t i = 0; i < w.size(); i++)
		{
			cout << w[i] << " ";
		}
	}
};