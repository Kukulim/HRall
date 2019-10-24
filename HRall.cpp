#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int wielkosc_rachunku, numer_niezjedzony_przez_anne, dla_braiana;
	cin >> wielkosc_rachunku >> numer_niezjedzony_przez_anne;
	int* rachunek = new int[wielkosc_rachunku];
	for (int i = 0; i < wielkosc_rachunku; i++)
		cin >> rachunek[i];
	cin >> dla_braiana;
	int suma_anny=0;
	for (int i = 0; i < wielkosc_rachunku; i++)
	{
		suma_anny += rachunek[i];
		if (i == numer_niezjedzony_przez_anne)
			suma_anny -= rachunek[i];
	}
	int wynik;
	wynik = (dla_braiana - (suma_anny / 2));
	if (wynik <= 0)
		cout << "Bon Appetit";
	else
		cout << wynik;

	delete[]rachunek;
	return 0;
}