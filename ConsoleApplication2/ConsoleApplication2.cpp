﻿#include<iostream>
#include<string>
using namespace std;

int main()
{
	int int1 = 15;
	int int2 = 20;
	int int3 = 30;

	cout << boolalpha;

	if (int1 == int3 && int2 != int3) {
		cout << "operator == && ==" << "true" << endl;
	}
	else {
		cout << "operator == && ==" << "false" << endl;
	}
	if (int1 >= int2 || int3 >= int2) {
		cout << "operator == || ==" << "true" << endl;
	}
	else {
		cout << "operator == || == " << "false" << endl;
	}
	return 0;
}