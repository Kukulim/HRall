#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int wielkosc_czekolady;
	cin >> wielkosc_czekolady;
	int* czekolada = new int[wielkosc_czekolady];
	for (int i = 0; i < wielkosc_czekolady; i++)
		cin >> czekolada[i];
	int dzien_urodzin, miesiac_urodzin;
	cin >> dzien_urodzin>>miesiac_urodzin;
	int ilosc_podzialow=0;
	int suma=0;
	int j = 0;
	do
	{
		for (int i = 0; i < miesiac_urodzin; i++)
		{
			suma += czekolada[i+j];
		}
		if (suma == dzien_urodzin)
			ilosc_podzialow++;
		suma = 0;
		j++;
	} while (j !=wielkosc_czekolady - miesiac_urodzin+1);
	
		cout << ilosc_podzialow<<"iloscpodz";


	return 0;
}