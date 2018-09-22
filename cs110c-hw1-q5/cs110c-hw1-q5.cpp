// cs110c-hw1-q5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdint.h>
using namespace std;

int main()
{
	int x;
	cout << "Enter size of array to be printed" << endl;
	while (!(cin >> x))
	{
		cin.clear();
		cin.ignore(INT32_MAX, '\n');
		cout << "wrong input" << endl;
	}

	for (int i = 1; i <= x; i++)
	{
		cout << i << " |";
		for (int j = 1; j <= x; j++)
		{
			cout << " " << j * i;
		}
		cout << endl << endl;
		if (i == 1)
		{
			for (int k = 0; k < x; k++)
			{
				cout << "--";
			}
			cout << "-" << endl;
		}
	}
	cin.get();
	cin.get();
	return 0;
}
