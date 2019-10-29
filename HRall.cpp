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
	int suma_nie = 0;
	int pozycja_nie = 0;
	int buffor = 0;
	int ktora_pozycja=0;
	int j = 0;
	for (int i = 0; i < dlugosc_sprawdzenia; i++)
	{
		for ( j = ilosc-1; j > -1; j--)
		{
			if (sprawdzenie[i] == v[j])
			{
				buffor = 1;
				ktora_pozycja = j;
				suma_nie++;
			}
		}
		if (buffor == 1)
			cout << "Yes " << ktora_pozycja+1<<endl;
		else if (suma_nie == 0 )
		{
				for (int k = 0; k < ilosc; k++)
				{
					if (sprawdzenie[i] < v[k]&&sprawdzenie[i]>v[k-1])
					{
						pozycja_nie = k;
					}
				}
			cout << "No " << pozycja_nie +1<< endl;
		}
		buffor = 0;
		ktora_pozycja = 0;
		pozycja_nie = 0;
		suma_nie = 0;
	}
	return 0;
}
