#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int wielkosc;
	cin >> wielkosc;
	int* tablica = new int[wielkosc];
	for (int i = 0; i < wielkosc; i++)
		cin >> tablica[i];

	int suma[5] = { 0 };
	int suma_max = 0;
	for (int j = 0; j<5; j++)
	{
		for (int i = 0; i < wielkosc; i++)
		{
			if (tablica[i] == j+1)
				suma[j]++;
		}
		if (suma[j] > suma_max)
			suma_max = suma[j];
	}
	for (int j = 0; j < 5; j++)
		if (suma[j] == suma_max)
		{
			cout << j + 1;
			break;
		}
	return 0;
}