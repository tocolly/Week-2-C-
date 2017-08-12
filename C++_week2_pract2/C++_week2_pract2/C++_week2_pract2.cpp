// C++_week2_pract2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool IsPalindrom(string word) {
	string a;
	for (int i = word.size()-1; i >= 0; i--) {
		a.push_back(word[i]);
	}

	if (word == a) {
		return true;
	}
	else {
		return false;
	}
}

/*

bool IsPolindrom(string word) {
	string p;
	p = word;
	reverse(p.begin(), p.end());
	if (word == p) {
		return true;
	}
	else {
		return false;
	}
}

*/

int main()
{
	string x;

	cin >> x;

	cout << IsPalindrom(x);
	cout << endl;
    return 0;
}

