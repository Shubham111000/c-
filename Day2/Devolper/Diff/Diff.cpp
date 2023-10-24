// Diff.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include<iostream>
using namespace std;

// TODO: This is an example of a library function
int Diff()
{
	int a, b;
	cout << "Enter the num a and num b";
	cin >> a >> b;

	if (a > b)
		return a;
	else
		return b;
}
