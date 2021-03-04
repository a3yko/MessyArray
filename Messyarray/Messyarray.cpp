// Messyarray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;


void arrayFill(int[]);
void randomizer(int[]);
void bubbleSort(int[]);
void search(int[]);
void binary(int[]);

int _tmain(int argc, _TCHAR* argv[])
{
	int arry[20];

	arrayFill(arry);
	randomizer(arry);
	bubbleSort(arry);
	for (int i = 0; i < 20; i++)
	{
		cout << arry[i] << endl;
	}



	search(arry);

	system("pause");
	return 0;
}


void arrayFill(int arry[])
{
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		arry[i] = rand() % 60 + 1;
	}
}


void randomizer(int arry[])
{
	bool diff;
	int random;
	for (int x = 0; x < 20; x++)
	{
		diff = false;
		while (diff == false)
		{
			random = rand() % 60 + 1;
			for (int i = 0; i <= x; i++)
			{
				if (random == arry[i])
				{
					i = x + 1;
				}
				else if (x == i)
				{
					diff = true;

					arry[x] = random;
				}
			
			}
		}
	}
}


void bubbleSort(int arry[])
{
	int hold, swap;

	do
	{
		swap = 0;

		for (int i = 0; i < 19; i++)
		{
			if (arry[i] > arry[i + 1])
			{
				swap++;
				hold = arry[i + 1];
				arry[i + 1] = arry[i];
				arry[i] = hold;
			}
		}
	} while (swap != 0);
}


void search(int arry[])
{	
	int a, b, c;
	cout << " Which 3 Key Values would you like to search for: ";
	cin >> a >> b >> c;
	for (int i = 0; i < 20; i++)
	{
		if (arry[i] == a)
		{
			cout << " The key value " << a << " is in index " << i << endl;
		}
		else if (arry[i] == b)
		{
			cout << " The key value " << b << " is in index " << i << endl;
		}
		else if (arry[i] == c)
		{
			cout << " The key value " << c << " is in index " << i << endl;
		}
	}
}


void binary(int arry[])
{
	int num;
	bool gotcha = false;
	cout << " What number would you like to search for: ";
	cin >> num;
	int min = 0, max = 20;

	while (gotcha == false)
	{
		if (num == arry[max])
		{
			gotcha == true;
			cout << " The value " << num << " is in index " << max << endl;
		}
		if (num == arry[min])
		{
			gotcha == true;
			cout << " The value " << num << " is in index " << min << endl;
		}
		else if (num == arry[max / 2])
		{
			gotcha == true;
			cout << " The value " << num << " is in index " << max/2 << endl;
		}
}