// while.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int bacon = 0;

	while (bacon <= 5) {
		cout << "bacon is " << bacon << endl;
		bacon = bacon + 1;
	}
	system("pause");
    return 0;
}

