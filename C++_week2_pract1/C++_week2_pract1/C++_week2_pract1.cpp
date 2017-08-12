// C++_week2_pract1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int Factorial(int n) {
	if (n <= 0) {
		return 1;
	}
	else {
		return n * Factorial(n - 1);
	}
}

int main()
{
	int x;

	cin >> x;

	cout << Factorial(x);
	cout << endl;
    return 0;
}

