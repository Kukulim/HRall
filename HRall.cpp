#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	int max = 0;
	int do_gory = 0;
	int na_dol = 0;
	int wielkosc;
	cin >> wielkosc;
	int *tablica =new int[wielkosc]; 
	for (int i = 0; i < wielkosc; i++)
	{
		cin >> tablica[i];
	}
	max = tablica[0];
	for (int i = 0; i < wielkosc; i++)
	{
		if (max < tablica[i])
		{
			max = tablica[i];
			do_gory++;
		}
	}
	max = tablica[0];
	for (int i = 0; i < wielkosc; i++)
	{
		if (max > tablica[i])
		{
			max = tablica[i];
			na_dol++;
		}
	}
	cout << do_gory << endl;
	cout << na_dol << endl;
}