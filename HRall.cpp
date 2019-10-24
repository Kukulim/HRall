#include <iostream>
using namespace std;

int main()
{
	int gotowka,ilosc_klawiatur,ilosc_usb;
	cin >> gotowka >> ilosc_klawiatur >> ilosc_usb;
	int* klawiatura = new int[ilosc_klawiatur];
	int* usb = new int[ilosc_usb];
	for (int i = 0; i < ilosc_klawiatur; i++)
	{
		cin >> klawiatura[i];
	}
	for (int i = 0; i < ilosc_usb; i++)
	{
		cin >> usb[i];
	}

	int suma=0;
	int max_suma=0;
	for (int j = 0; j < ilosc_klawiatur; j++)
	{
		for (int i = 0; i < ilosc_usb; i++)
		{
			suma = klawiatura[j] + usb[i];
			if ((suma > max_suma) && suma <= gotowka)
				max_suma = suma;
		}
		suma = 0;
	}
	if (max_suma == 0)
		max_suma = -1;
	cout << max_suma;

	return 0;
}