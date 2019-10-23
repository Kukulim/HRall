#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int wielkosc, porownanie;
	cin >> wielkosc>>porownanie;
	int* tablica = new int[wielkosc];
	for (int i = 0; i < wielkosc; i++)
		cin >> tablica[i];

	int ilosc_podzialow=0;
	int suma = 0;
	for (int j = 0; j<wielkosc; j++)
	{
		for (int i = 1; i < wielkosc-j; i++)
		{
			suma = tablica[0+j] + tablica[i+j];
			cout << suma << endl;
			if (suma%porownanie==0)
				ilosc_podzialow++;
		}
		suma = 0;
	}
	
		cout << ilosc_podzialow<<"iloscpodz";


	return 0;
}