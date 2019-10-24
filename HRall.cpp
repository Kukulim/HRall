#include <iostream>
using namespace std;

int pageCount(int ilosc_stron, int szukana) {
	int* ksiazka = new int[ilosc_stron];
	int stron_od_poczatku = 0;
	int stron_od_konca = ilosc_stron;
	for (int i = 0; i < ilosc_stron; i++)
		ksiazka[i] = i;
	for (int i = 0; i < ilosc_stron; i++)
	{
		stron_od_poczatku++;
		if (i == szukana)
			break;
	}
	stron_od_konca = ilosc_stron - szukana;
	cout << stron_od_poczatku << "od poczatku"<<endl;
	cout << stron_od_konca << "od konca"<< endl;
	if (stron_od_konca / 2 < stron_od_poczatku / 2)
		return stron_od_konca;
	return stron_od_poczatku/2;
}

int main()
{
	int ilosc_stron,szukana;
	cin >> ilosc_stron >> szukana;
	cout << pageCount(ilosc_stron, szukana);
	return 0;
}
