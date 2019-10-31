#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector<int>v;
	int ilosc;
	cin >> ilosc;
	for (int i = 0; i <ilosc; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	vector<int>sprawdzenie;
	int dlugosc_sprawdzenia;
	cin >> dlugosc_sprawdzenia;
	for (int i = 0; i < dlugosc_sprawdzenia; i++)
	{
		int x;
		cin >> x;
		sprawdzenie.push_back(x);
	}

	for (int i = 0; i < dlugosc_sprawdzenia; i++)
	{
		for (int j = 0; j < ilosc; j++)
		{
			if (sprawdzenie[i] == v[j])
			{
				cout << "Yes " << j+1<<endl;
				break;
			}
			else
			{
					if (sprawdzenie[i] < v[j] && sprawdzenie[i]>v[j - 1])
					{
						cout << "No " << j + 1 << endl;
						break;
					}	
			}
		}
	}
	return 0;
}
